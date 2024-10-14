/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:19:39 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/14 15:19:39 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog(void) : _brain(new Brain())
{
	std::cout << GREEN << "Dog default constructor called!" << RESET << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog& cp) : Animal(cp), _brain(new Brain(*cp._brain))
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
        delete this->_brain;
        this->_brain = new Brain(*cp._brain);
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << RED << "Dog default destructor called!" << RESET << std::endl;
	delete this->_brain;

}

void	Dog::makeSound(void) const
{
	std::cout << YELLOW << "Wolffffff" << RESET << std::endl;
}
