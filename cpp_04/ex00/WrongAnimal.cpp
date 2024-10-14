/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:49:19 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/14 12:49:19 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal(void)
{
	std::cout << GREEN << "WrongAnimal default contructor called!" << RESET << std::endl;
	this->_type = "WrongAnimal";
	
}

WrongAnimal::WrongAnimal(WrongAnimal& cp)
{
	std::cout << GREEN << "WrongAnimal copy contructor called!" << RESET << std::endl;
	*this = cp;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& cp)
{
	std::cout << GREEN << "WrongAnimal assignment operator called!" << RESET << std::endl;
	if (this != &cp)
		this->_type = cp._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << RED << "WrongAnimal default destructor called!" << RESET << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << CYAN << "WrongAnimal sound..." << RESET << std::endl;
}

std::string		WrongAnimal::getType() const
{
	return (this->_type);
}
