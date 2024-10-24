/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:58:12 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/23 17:10:43 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <cstdlib>


class BitcoinExchange
{
	private:
		std::map<std::string, float> _bitcoinPrices;
		
		void	loadDatabase(const std::string &dbFile);
		float	getBitcoinPrice(const std::string &data);
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& cp);
		BitcoinExchange&operator=(const BitcoinExchange& cp);
		~BitcoinExchange();

		BitcoinExchange(const std::string &dbFile);
		
		void	processInputFile(const std::string &inputFile);
};

