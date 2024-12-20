/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:20:53 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/10 09:45:13 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <Harl.hpp>

void	Harl::debug(void)
{
	std::cout << YELLOW << "[DEBUG]" << RESET << std::endl;
	std::cout << YELLOW << "I love having a loud and defined bass massaging my ears!" << RESET << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << YELLOW << "[INFO]" << RESET << std::endl;
	std::cout << YELLOW << "I can't belive you're so noob not to bring enough subs. Everyone knows you loose definition the more you push a single unit!" << RESET << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELLOW << "[WARNING]" << RESET << std::endl;
	std::cout << YELLOW << "If you dont bring more subs next time I'll tell everyone about the bad sound quality of your events!" << RESET << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << YELLOW << "[ERROR]" << RESET << std::endl;
	std::cout << YELLOW << "Unbearable crapy noise, I am leaving!" << RESET << std::endl;
	std::cout << std::endl;
}

Harl::~Harl()
{
	std::cout << RED << "Harl cease out of existence!" << RESET << std::endl;
}

Harl::Harl(void)
{
	std::cout << GREEN << "Harl came into existence!" << RESET << std::endl;
	funcs[0] = &Harl::debug;
	funcs[1] = &Harl::info;
	funcs[2] = &Harl::warning;
	funcs[3] = &Harl::error;
}

void	Harl::complain(std::string level)
{
	int	i = 0;
	std::string s[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (i < 4 && s[i].compare(level) != 0)
		i++;	
	switch (i)
	{
		case 0:
			Harl::funcs[i]();
			break;
		case 1:
			Harl::funcs[i]();
			break;
		case 2:
			Harl::funcs[i]();
			break;
		case 3:
			Harl::funcs[i]();
			break;
	default:
		std::cout << YELLOW << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
		break;
	}
}
