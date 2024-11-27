/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:07:19 by danalmei          #+#    #+#             */
/*   Updated: 2024/11/20 11:36:28 by danalmei         ###   ########.fr       */
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
	{
		_bitcoinPrices = cp._bitcoinPrices;
		_inputValues = cp._inputValues;
	}
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
	std::getline(db, line);
	while (std::getline(db, line))
	{
		std::stringstream ss(line);
		std::string date;
		float price = -1;

		std::getline(ss, date, ',');
		if (!(ss >> price))
			price = -1;
		BitcoinData data;
		data.date = date;
		data.value = price;
		this->_bitcoinPrices.push_back(data);
	}

	if (DEBUG == DEBUG_ON)
	{
		std::vector<BitcoinData>::const_iterator it = this->_bitcoinPrices.begin();
		for (;it != this->_bitcoinPrices.end(); it++)
		{
			std::cout << MAGENTA << "Date: " << it->date << RESET << std::endl;
			std::cout << MAGENTA << "Value: " << it->value << RESET << std::endl;
		}
	}
}

std::string trim(const std::string& str)
{
    size_t start = 0;
    while (start < str.size() && (str[start] == ' ' || str[start] == '\t'))
        start++;

    size_t end = str.size();
    while (end > start && (str[end - 1] == ' ' || str[end - 1] == '\t'))
        end--;

    return str.substr(start, end - start);
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
	std::getline(input, line);
	while (std::getline(input, line))
	{
		std::stringstream ss(line);
		std::string date;
		float n_btc = -1;
		std::string wtv;

		std::getline(ss, date, '|');
		if (!(ss >> n_btc))
			n_btc = -1;
		if (ss >> wtv)
			n_btc = -1;
		BitcoinData data;
		data.date = date;
		data.value = n_btc;
		this->_inputValues.push_back(data);
	}

	if (DEBUG == DEBUG_ON)
	{
		std::vector<BitcoinData>::const_iterator it = this->_inputValues.begin();
		for (;it != this->_inputValues.end(); it++)
		{
			std::cout << MAGENTA << "Date: " << it->date << RESET << std::endl;
			std::cout << MAGENTA << "Value: " << it->value << RESET << std::endl;
		}
	}
}

static bool	is_valid_date(const std::string& date)
{

	int year, month, day;
	char dash1, dash2;

	if (date.length() != 11)
		return (FALSE);
			
	if (date[4] != '-' || date[7] != '-')
		return (FALSE);
	
	std::stringstream ss(date);
	if (!(ss >> year >> dash1 >> month >> dash2 >> day))
		return (FALSE);
	
	if (DEBUG == DEBUG_ON)
	{
		std::cout << YELLOW << "Year: " << year << RESET << std::endl;
		std::cout << YELLOW << "Month: " << month << RESET << std::endl;
		std::cout << YELLOW << "Day: " << day << RESET << std::endl;
	}
		
	if (year < 0 || year > 2024)
		return (FALSE);
	if (month < 0 || month > 12)
		return (FALSE);
	if (day < 0 || day > 31)
		return (FALSE);
	
	return (TRUE);
}

float	BitcoinExchange::find_closest_date(const std::string& inputDate) const
{
	std::vector<BitcoinData>::const_iterator priceIt = this->_bitcoinPrices.begin();
	std::vector<BitcoinData>::const_iterator closestIt = this->_bitcoinPrices.end();
	
	for (; priceIt != _bitcoinPrices.end(); priceIt++)
	{
		if (priceIt->date > inputDate)
			break;
		closestIt = priceIt;
	}
	if (closestIt == _bitcoinPrices.end())
	{
		std::cout << "Error: No data available for or before date " << inputDate << std::endl;
		return -1.0f;
	}
	return closestIt->value;
}

void BitcoinExchange::processExchange() const
{
	std::vector<BitcoinData>::const_iterator it = this->_inputValues.begin();

	for (;it != this->_inputValues.end(); it++)
	{
		if (!is_valid_date(it->date))
		{
			std::cerr << RED << ERR_MSG_DATE << it->date << RESET << std::endl;
			continue ;
		}
		
		if (it->value <= 0)
		{
			std::cerr << RED << ERR_MSG_NEGATIVE_VALUE << RESET << std::endl;
			continue ;
		}

		if (it->value >= static_cast<float>(std::numeric_limits<int>::max()))
		{
			std::cerr << RED << ERR_MSG_TOO_BIG_NUMBER << RESET << std::endl;
			continue ;
		}

		float value = find_closest_date(it->date);
		float res = it->value * value;
		std::cout << CYAN << it->date << " => " << it->value << " = " << res << RESET << std::endl;
	}
}