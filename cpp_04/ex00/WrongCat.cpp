/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:52:54 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/14 12:52:54 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat(void)
{
	std::cout << GREEN << "WrongCat default constructor called!" << RESET << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat& cp) : WrongAnimal(cp)
{
	std::cout << GREEN << "WrongCat copy constructor called!" << RESET << std::endl;
	this->_type = cp._type;
}

WrongCat& WrongCat::operator=(const WrongCat& cp)
{
	std::cout << GREEN << "WrongCat assignment operator called!" << RESET << std::endl;
	if (this != &cp)
	{
		WrongAnimal::operator=(cp);
		this->_type = cp._type;
	}
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << RED << "WrongCat default destructor called!" << RESET << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << CYAN << "Miauuuuu but pronunced wrongly" << RESET << std::endl;
}
