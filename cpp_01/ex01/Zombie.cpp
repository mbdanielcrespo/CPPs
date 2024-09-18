/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:14:39 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:16:20 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>
#include <Zombie.hpp>

Zombie::Zombie()
{
	std::cout << GREEN << "Nameless zombie created successfully!" << RESET << std::endl; 
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << GREEN << "Zombie " << this->_name << "created successfully!" << RESET << std::endl; 
}

Zombie::~Zombie()
{
	std::cout << GREEN << "Zombie destroyed successfully!" << RESET << std::endl; 
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
	std::cout << "Zombie was named: " << this->_name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
