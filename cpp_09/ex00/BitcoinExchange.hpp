/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:58:12 by danalmei          #+#    #+#             */
/*   Updated: 2024/11/13 15:20:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <limits>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _bitcoinPrices;
		std::map<std::string, float> _inputValues;
		
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
};

