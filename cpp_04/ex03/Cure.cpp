/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:44:55 by marvin            #+#    #+#             */
/*   Updated: 2024/10/17 19:44:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>
#include <main.h>

Cure::Cure() : AMateria("cure")
{
	std::cout << GREEN << "Cure default constructor called" << RESET << std::endl;
}

Cure::Cure(const Cure& cp) : AMateria(cp)
{
	std::cout << GREEN << "Cure copy constructor called" << RESET << std::endl;
	*this = cp;
}

Cure&	Cure::operator=(const Cure& cp)
{
	std::cout << GREEN << "Cure assignment operator called" << RESET << std::endl;
	if (this != &cp)
		AMateria::operator=(cp);
	return (*this);
}

Cure::~Cure()
{
	std::cout << RED << "Cure default destructor called" << RESET << std::endl;
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}
	
void Cure::use(ICharacter& target)
{
	std::cout << CYAN << "* heals " << target.getName() << "\'s wounds *" << RESET << std::endl;
}
