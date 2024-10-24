/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:31:29 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:31:29 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>
#include <ScavTrap.hpp>

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << GREEN << "ScavTrap Default constructor called!" << RESET << std::endl;
}

ScavTrap::ScavTrap(const std::string& newname) : ClapTrap(newname, 100, 50, 20)
{
	std::cout << GREEN << "ScavTrap Atributte constructor called!" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cp) : ClapTrap(cp)
{
    std::cout << GREEN << "ScavTrap Copy constructor called!" << RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &cp)
{
    std::cout << GREEN << "ScavTrap Copy assignment operator called!" << RESET << std::endl;
    if (this != &cp)
        ClapTrap::operator=(cp);
    return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "ScavTrap " << _name << " Default destructor called!" << RESET << std::endl;
}

void	ScavTrap::guardGate(void)
{
	//std::cout << YELLOW << "ScavTrap ";
	std::cout << YELLOW << _name << " is now in Gate Keeper Mode!" << RESET << std::endl;
}
