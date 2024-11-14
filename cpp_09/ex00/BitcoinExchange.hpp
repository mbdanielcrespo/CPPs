/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:58:12 by danalmei          #+#    #+#             */
/*   Updated: 2024/11/13 21:06:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <limits>

struct BitcoinData
{
	std::string date;
	float value;
};

class BitcoinExchange
{
	private:
		std::vector<BitcoinData> _bitcoinPrices;
		std::vector<BitcoinData> _inputValues;
		
		void	loadDatabase(const std::string &dbFile);
		//float	getBitcoinPrice(const std::string &data);
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& cp);
		BitcoinExchange&operator=(const BitcoinExchange& cp);
		~BitcoinExchange();

		BitcoinExchange(const std::string &dbFile);
		void	processInputFile(const std::string &inputFile);
		void	processExchange(void) const;
		float	find_closest_date(const std::string& inputDate) const;
};

