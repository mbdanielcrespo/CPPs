/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:18:01 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/10 09:42:05 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>
#include <main.h>

HumanB::HumanB(std::string name)
{
	this->_name = name;
	std::cout << GREEN << "HumanB created successfully!" << RESET << std::endl;
}

HumanB::~HumanB()
{
	std::cout << RED << "HumanB destroyed successfully!" << RESET << std::endl;
}

void	HumanB::setWeapon(Weapon *weapon)
{
	this->_weapon = weapon;
}

void	HumanB::attack(void)
{
	std::cout << YELLOW << this->_name << " attacks with " << this->_weapon->getType() << RESET << std::endl;
}