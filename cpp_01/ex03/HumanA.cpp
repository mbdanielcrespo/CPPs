/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:17:48 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:17:50 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>
#include <main.h>

HumanA::HumanA(std::string name, Weapon *weapon)
{
	this->_name = name;
	this->_weapon = weapon;
	std::cout << GREEN << "HumanA created successfully!" << RESET << std::endl;
}

HumanA::~HumanA()
{
	std::cout << GREEN << "HumanA destroyed successfully!" << RESET << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}