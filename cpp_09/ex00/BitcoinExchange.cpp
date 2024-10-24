/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:07:19 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/23 17:27:05 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>
#include <main.h>

BitcoinExchange::BitcoinExchange()
{
	std::cout << GREEN << "BtcExch Default constructor called!" << RESET << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& cp) : _bitcoinPrices(cp._bitcoinPrices)
{
	std::cout << GREEN << "BtcExch copy constructor called!" << RESET << std::endl;
}

BitcoinExchange::BitcoinExchange&operator=(const BitcoinExchange& cp)
{
	std::cout << GREEN << "BtcExch assignment operator called!" << RESET << std::endl;
	if (this != &cp)
		this._bitcoinPrices = cp._bitcoinPrices;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << RED << "BtcExch Default destructor called!" << RESET << std::endl;
}

BitcoinExchange::BitcoinExchange(const std::string &dbFile)
{
	loadDatabase(dbFile);
}

void	BitcoinExchange::loadDatabase(const std::string &dbFile)
{
	std::ifstream db(dbFile.c_str());
	if (!db.is_open)
	{
		std::cerr << RED << "ERROR: Could not open db file!" << RESET << std::endl;
		exit(1);
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
	}
}

float	BitcoinExchange::getBitcoinPrice(const std::string &data)
{
	std::map<std::string, float>::iterator it = this->_bitcoinPrices.lower_bound(date);

	if (it == this->_bitcoinPrices.end() || it->first != date)
	{
		if (it != this._bitcoinPrices.begin())
			--it;
		else
			return (-1);
	}
	return (it->second);
}

void	BitcoinExchange::processInputFile(const std::string &inputFile)
{
	std::ifstream input(inputFile.c_str());
	if (!input.is_open())
	{
		std::cerr << RED << "ERROR: Could not open db file!" << RESET << std::endl;
		return;
	}
}