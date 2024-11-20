/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:58:09 by danalmei          #+#    #+#             */
/*   Updated: 2024/11/20 11:30:54 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>
#include <main.h>

# define DB_FILENAME "data.csv"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		PRINT_ERROR(RED, ERR_MSG_NUMBER_OF_ARGS);
		return (EXIT_FAILIURE);
	}
	
	BitcoinExchange btc(DB_FILENAME);

	btc.processInputFile(av[1]);
	btc.processExchange();
	
	return 0;
}