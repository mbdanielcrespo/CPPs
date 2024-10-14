/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:31:02 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/12 14:55:14 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>
#include <main.h>
#include <iostream>

int	main(void)
{
	ScavTrap ST1;
	ScavTrap ST2("Menganito");

	ST2.attack("Bully");
	ST2.takeDamage(27);
	ST2.beRepaired(21);
	std::cout << std::endl;
	ST2.printStats();
	std::cout << std::endl;
	ST2.guardGate();
}