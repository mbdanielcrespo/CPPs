/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:58:09 by danalmei          #+#    #+#             */
/*   Updated: 2024/11/15 18:01:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>
#include <main.h>

# define DB_FILENAME "data.csv"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << RED << ERR_MSG_NUMBER_OF_ARGS << RESET << std::endl;
		return (EXIT_FAILIURE);
	}
	
	BitcoinExchange btc(DB_FILENAME);

	btc.processInputFile(av[1]);
	btc.processExchange();
	
	return 0;
}