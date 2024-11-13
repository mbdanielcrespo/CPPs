/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:07:19 by danalmei          #+#    #+#             */
/*   Updated: 2024/11/13 15:47:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>
#include <main.h>

BitcoinExchange::BitcoinExchange()
{
	if (DEBUG == DEBUG_ON)
		std::cout << GREEN << DEFAULT_CONSTRUCTOR << RESET << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& cp) : _bitcoinPrices(cp._bitcoinPrices)
{
	if (DEBUG == DEBUG_ON)
		std::cout << GREEN << COPY_CONSTRUCTOR << RESET << std::endl;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& cp)
{
	if (DEBUG == DEBUG_ON)
		std::cout << GREEN << ASSIGNMENT_OPERATOR << RESET << std::endl;
	if (this != &cp)
		this->_bitcoinPrices = cp._bitcoinPrices;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
	if (DEBUG == DEBUG_ON)
		std::cout << RED << DEFAULT_DESTRUCTOR << RESET << std::endl;
}

BitcoinExchange::BitcoinExchange(const std::string &dbFile)
{
	loadDatabase(dbFile);
}

void	BitcoinExchange::loadDatabase(const std::string &dbFile)
{
	std::ifstream db(dbFile.c_str());
	if (!db.is_open())
	{
		std::cerr << RED << ERR_MSG_OPEN_FILE << RESET << std::endl;
		exit(EXIT_FAILIURE);
	}
	
	std::string line;
	while (std::getline(db, line))
	{
		std::stringstream ss(line);
		std::string date;
		float price;

		std::getline(ss, date, ',');
		ss >> price;

		this->_bitcoinPrices[date] = price;

		if (DEBUG == DEBUG_ON)
		{
			std::cout << std::endl;
			std::cout << YELLOW << "Line: " << line << RESET << std::endl;
			std::cout << YELLOW << "date: " << date << RESET << std::endl;
			std::cout << YELLOW << "price: " << price << RESET << std::endl;
		}
	}
}

void	BitcoinExchange::processInputFile(const std::string &inputFile)
{
	std::ifstream input(inputFile.c_str());
	if (!input.is_open())
	{
		std::cerr << RED << ERR_MSG_OPEN_FILE << RESET << std::endl;
		return;
	}

	std::string line;
	while (std::getline(input, line))
	{
		std::stringstream ss(line);
		std::string date;
		float n_btc;

		std::getline(ss, date, '|');
		ss >> n_btc;

		this->_inputValues[date] = n_btc;
		
		if (DEBUG == DEBUG_ON)
		{
			std::cout << std::endl;
			std::cout << YELLOW << "Line: " << line << RESET << std::endl;
			std::cout << YELLOW << "date: " << date << RESET << std::endl;
			std::cout << YELLOW << "n_btc: " << n_btc << RESET << std::endl;
		}
	}
}

static bool	is_valid_date(const std::string& date)
{

	std::cout << CYAN << "HERE!" << RESET << std::endl;

	std::size_t pos = date.find(" | ");
    if (pos == std::string::npos)
		return (FALSE);
		
	int year, month, day;
	char dash1, dash2;

	std::cout << CYAN << "HERE1!" << RESET << std::endl;

	if (date.length() != 10)
		return (FALSE);
		
	std::cout << CYAN << "HERE2!" << RESET << std::endl;
	
	if (date[4] != '-' || date[7] != '-')
		return (FALSE);
	
	std::cout << CYAN << "HERE3!" << RESET << std::endl;

	std::stringstream ss(date);
    if (!(ss >> year >> dash1 >> month >> dash2 >> day))
		return (FALSE);
	
	if (1)
	{
		std::cout << YELLOW << "Year: " << year << RESET << std::endl;
		std::cout << YELLOW << "Month: " << month << RESET << std::endl;
		std::cout << YELLOW << "Day: " << day << RESET << std::endl;
	}
		
	if (year < 0 || year > 2024) // CHANGE HARDCODE
		return (FALSE);
	if (month < 0 || month > 12)
		return (FALSE);
	if (day < 0 || day > 31)
		return (FALSE);
	
	return (TRUE);
}

/*
static bool is_valid_value(const std::string& value)
{
	std::stringstream ss(value);
	float nb;

	if (!(ss >> nb))
		return (FALSE);
	
	std::string ramaining;
	if (ss >> ramaining)
		return (FALSE);
	
	size_t decimal_count = std::count(value.begin(), value.end(), '.');
	if (decimal_count > 1)
		return (FALSE);
	
	//if (!data && nb > 1000)
	//	return (FALSE);

	return nb;
}
*/

void BitcoinExchange::processExchange() const
{
	std::map<std::string, float>::const_iterator bit_it;
	std::map<std::string, float>::const_iterator prev_it;

	for (std::map<std::string, float>::const_iterator it = this->_inputValues.begin(); it != this->_inputValues.end(); it++)
	{
		std::cout << MAGENTA << "Date: " << it->first << RESET << std::endl;

		if (!is_valid_date(it->first))
		{
			std::cout << RED << ERR_MSG_DATE << it->first << RESET << std::endl;
			continue ;
		}
		
		if (it->second <= 0)
		{
			std::cout << RED << ERR_MSG_NEGATIVE_VALUE << RESET << std::endl;
			continue ;
		}

		if (it->second > static_cast<float>(std::numeric_limits<int>::max()))
		{
			std::cout << RED << ERR_MSG_TOO_BIG_NUMBER << RESET << std::endl;
			continue ;
		}

		/*if (!is_valid_value(it->second))
		{
			std::cout << RED << ERR_MSG_INVALID_VALUE << RESET << std::endl;
			continue ;
		}*/

		bit_it = this->_bitcoinPrices.lower_bound(it->first);
		if (bit_it == this->_bitcoinPrices.end() || bit_it->first != it->first)
		{
			if (bit_it == this->_bitcoinPrices.begin())
			{
				std::cout << RED << ERR_MSG_NO_DATE << RESET << std::endl;
				continue ;
			}
			--bit_it;
		}

		float res = static_cast<float>(it->second) * bit_it->second;
		std::cout << CYAN << it->first << " => " << it->second << " = " << res << RESET << std::endl;
	}
}