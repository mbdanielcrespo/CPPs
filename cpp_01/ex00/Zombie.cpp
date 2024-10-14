/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:12:30 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/09 15:39:07 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <main.h>

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << GREEN << "Zombie created successfully!" << RESET << std::endl; 
}

Zombie::~Zombie()
{
	std::cout << RED << "Zombie destroyed successfully!" << RESET << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << B_YELLOW << this->_name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
