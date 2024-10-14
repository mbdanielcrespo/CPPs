/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:20:12 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/09 16:39:04 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>
#include <main.h>

Weapon::Weapon(std::string type)
{
	this->_type = type;
	std::cout << GREEN << "Weapon created successfully!" << RESET << std::endl;
}

Weapon::~Weapon()
{
	std::cout << RED << "Weapon destroyes successfully!" << RESET << std::endl;
}

std::string	Weapon::getType() const
{
	return this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}