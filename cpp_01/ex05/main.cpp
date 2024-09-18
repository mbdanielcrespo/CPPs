/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:21:25 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:21:27 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << RED << "Invalid number of arguments!" << RESET << std::endl;
		return (1);
	}

	Harl _Harl;
	std::string complaint_lvl = av[1];
	_Harl.complain(complaint_lvl);
	return (0);
}