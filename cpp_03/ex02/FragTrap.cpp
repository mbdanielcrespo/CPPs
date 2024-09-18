/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:31:56 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:31:56 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>
#include <main.h>

FragTrap::FragTrap(void) : ClapTrap("UnNamed", 100, 100 , 30)
{
	std::cout << GREEN << "FragTrap default constructor called!" << RESET << std::endl;
}

FragTrap::FragTrap(const std::string& newname) : ClapTrap(newname, 100, 100, 30)
{
	std::cout << GREEN << "FragTrap attribute constructor called!" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &cp) : ClapTrap(cp.getName(), 100, 100, 30)
{
	std::cout << GREEN << "FragTrap copy constructor called!" << RESET << std::endl;
	*this = cp;
}

FragTrap& FragTrap::operator=(const FragTrap &cp)
{
	std::cout << GREEN << "FragTrap copy assignment operator called!" << RESET << std::endl;
	if (this != &cp)
	{
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << RED << "FragTrap " << getName() << " Default destructor called!" << RESET << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	std::cout << YELLOW << "FragTrap " << getName();
	if (getAttack() <= 0 || getEnergy() <= 0)
		std::cout << " is no able to attack!" << RESET <<  std::endl;
	else
		std::cout << " attacks " << target << " causing " << getAttack() << " points of damage!" << RESET << std::endl;
}

void	FragTrap::guardGate(void)
{
	std::cout << YELLOW << "FragTrap " << getName() << " is now in Gate Keeper Mode!" << RESET << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << YELLOW << "FragTrap " << getName() << " gave a proper highfive to their counterparts!" << RESET << std::endl;
}