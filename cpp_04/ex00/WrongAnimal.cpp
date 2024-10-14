/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:49:19 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/14 12:49:19 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal(void)
{
	std::cout << GREEN << "Animal default contructor called!" << RESET << std::endl;
	this->_type = "animal";
	
}

Animal::Animal(Animal& cp)
{
	std::cout << GREEN << "Animal copy contructor called!" << RESET << std::endl;
	*this = cp;
}

Animal&	Animal::operator=(const Animal& cp)
{
	std::cout << GREEN << "Animal assignment operator called!" << RESET << std::endl;
	if (this != &cp)
		this->_type = cp._type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << RED << "Animal default destructor called!" << RESET << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Generic animal sound..." << std::endl;
}

std::string		Animal::getType() const
{
	return (this->_type);
}
