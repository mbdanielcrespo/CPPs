/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:31:49 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:31:49 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap()
{
	std::cout << GREEN << "ClapTrap default constructor called!" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name, int health, int energy, int attack) : _name(name), _health(health)
{
	this->_attack = attack;
	this->_energy = energy;
	std::cout << GREEN << "ClapTrap attribute constructor called!" << RESET << std::endl;
	std::cout << YELLOW << "Name: " << _name << RESET << std::endl;
	std::cout << YELLOW << "Health: " << _health << RESET << std::endl;
	std::cout << YELLOW << "Energy: " << _energy << RESET << std::endl;
	std::cout << YELLOW << "Attack: " << _attack << RESET << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "ClapTrap default destructor called!" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cp) : _name(cp._name)
{
	std::cout << "ClapTrap " << _name << " assignment operator called" << std::endl;
	*this = cp;
}

ClapTrap& 	ClapTrap::operator=(const ClapTrap &cp)
{
	std::cout << GREEN << "Copy constructor called!" << RESET << std::endl;
	if (this == &cp)
		return (*this);
	this->_name = cp._name;
	this->_health = cp._health;
	this->_attack = cp._attack;
	this->_energy = cp._energy;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << YELLOW << "Claptrap " << this->_name;
	if (_attack <= 0 || _energy <= 0)
		std::cout << " is no able to attack!" << std::endl;
	else
	{
		_energy -= 1;
		std::cout << " attacks " << target << " causing " << this->_attack << " points of damage!" << RESET << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_health -= amount;
	std::cout << YELLOW << "Claptrap " << this->_name << " took " << amount << " damage points!" << RESET << std::endl;
	if (this->_health <= 0)
		std::cout << B_YELLOW << "Claptrap " << this->_name << "died!" << RESET << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << YELLOW << "Claptrap " << this->_name << " restored " << amount << " health points!" << RESET << std::endl;
	this->_health += amount;
}

void	ClapTrap::printStats(void)
{
	std::cout << YELLOW << "Name: " << this->_name << RESET << std::endl;
	std::cout << YELLOW << "Health: " << this->_health << RESET << std::endl;
	std::cout << YELLOW << "Energy: " << this->_energy << RESET << std::endl;
	std::cout << YELLOW << "Attack: " << this->_attack << RESET << std::endl;
}

const std::string	&ClapTrap::getName(void) const
{
	return (this->_name);
}

const int	&ClapTrap::getHealth() const
{
	return	(this->_health);
}

const int	&ClapTrap::getEnergy() const
{
	return (this->_energy);
}

const int	&ClapTrap::getAttack() const
{
	return (this->_attack);
}