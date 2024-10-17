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

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << GREEN << "FragTrap Default constructor called!" << RESET << std::endl;
}

FragTrap::FragTrap(const std::string& newname) : ClapTrap(newname, 100, 100, 30)
{
	std::cout << GREEN << "FragTrap Attribute constructor called!" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &cp) : ClapTrap(cp)
{
	std::cout << GREEN << "FragTrap copy constructor called!" << RESET << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &cp)
{
	std::cout << GREEN << "FragTrap copy assignment operator called!" << RESET << std::endl;
	if (this != &cp)
        ClapTrap::operator=(cp);
    return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << RED << "FragTrap Default destructor called!" << RESET << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	//std::cout << YELLOW << "FragTrap "; 
	std::cout << YELLOW << _name << " gave a proper highfive to their counterparts!" << RESET << std::endl;
}