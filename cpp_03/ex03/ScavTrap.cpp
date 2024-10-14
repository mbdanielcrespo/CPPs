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
	std::cout << RED << "ScavTrap " << getName() << " Default destructor called!" << RESET << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	//std::cout << YELLOW << "ScavTrap ";
	std::cout << YELLOW << this->getName();
	if (getAttack() <= 0 || getEnergy() <= 0)
		std::cout << " is not able to attack!" << std::endl;
	else
	{
		setEnergy(getEnergy() - 1);
		std::cout << " attacks " << target << " causing " << this->getAttack() << " points of damage!" << RESET << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	//std::cout << YELLOW << "ScavTrap ";
	std::cout << YELLOW << getName() << " is now in Gate Keeper Mode!" << RESET << std::endl;
}
