/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:45:11 by marvin            #+#    #+#             */
/*   Updated: 2024/10/17 19:45:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>
#include <main.h>

Ice::Ice() : AMateria("ice")
{
	std::cout << GREEN << "Ice default constructor called" << RESET << std::endl;
}

Ice::Ice(const Ice& cp) : AMateria(cp)
{
	std::cout << GREEN << "Ice copy constructor called" << RESET << std::endl;
}

Ice&	Ice::operator=(const Ice& cp)
{
	std::cout << GREEN << "Ice assignment operator called" << RESET << std::endl;
	if (this != &cp)
        AMateria::operator=(cp);
    return *this;
}

Ice::~Ice()
{
	std::cout << RED << "Ice default destructor called" << RESET << std::endl;
}

AMateria*	Ice::clone() const
{
	return new Ice(*this);
}
	
void	Ice::use(ICharacter& target)
{
	std::cout << CYAN << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}
