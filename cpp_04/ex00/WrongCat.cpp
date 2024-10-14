/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:52:54 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/14 12:52:54 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat(void)
{
	std::cout << GREEN << "Cat default constructor called!" << RESET << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat& cp) : Animal(cp)
{
	std::cout << GREEN << "Cat copy constructor called!" << RESET << std::endl;
	this->_type = cp._type;
}

Cat& Cat::operator=(const Cat& cp)
{
	std::cout << GREEN << "Cat assignment operator called!" << RESET << std::endl;
	if (this != &cp)
	{
		Animal::operator=(cp);
		this->_type = cp._type;
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << RED << "Cat default destructor called!" << RESET << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << YELLOW << "Miauuuuu" << RESET << std::endl;
}
