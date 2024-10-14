/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:47:29 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/14 12:47:29 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog(void)
{
	std::cout << GREEN << "Dog default constructor called!" << RESET << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog& cp) : Animal(cp)
{
	std::cout << GREEN << "Dog copy constructor called!" << RESET << std::endl;
	this->_type = cp._type;
}

Dog& Dog::operator=(const Dog& cp)
{
	std::cout << GREEN << "Dog assignment operator called!" << RESET << std::endl;
	if (this != &cp)
	{
		Animal::operator=(cp);
		this->_type = cp._type;
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << RED << "Dog default destructor called!" << RESET << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << YELLOW << "Wolffffff" << RESET << std::endl;
}
