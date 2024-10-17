/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:07:06 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/14 13:07:06 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat(void) : _brain(new Brain())
{
	std::cout << GREEN << "Cat default constructor called!" << RESET << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat& cp) : AAnimal(cp)
{
	std::cout << GREEN << "Cat copy constructor called!" << RESET << std::endl;
	this->_brain = new Brain(*cp._brain);
}

Cat& Cat::operator=(const Cat& cp)
{
	std::cout << GREEN << "Cat assignment operator called!" << RESET << std::endl;
	if (this != &cp)
	{
		AAnimal::operator=(cp);
        delete this->_brain;
        this->_brain = new Brain(*cp._brain);
	}
	return *this;
}

Cat::~Cat(void)
{
	std::cout << RED << "Cat default destructor called!" << RESET << std::endl;
	delete this->_brain;
}

void	Cat::makeSound(void) const
{
	std::cout << YELLOW << "Miauuuuu" << RESET << std::endl;
}

const std::string& Cat::getType(void) const
{
    return this->_type;
}