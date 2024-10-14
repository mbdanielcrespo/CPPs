/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:32:20 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/12 16:19:28 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>
#include <main.h>

int	main(void)
{
	FragTrap FT2("Juanito");

	FT2.attack("Bully");
	FT2.takeDamage(27);
	FT2.beRepaired(21);
	std::cout << std::endl;
	FT2.printStats();
	std::cout << std::endl;
	FT2.highFiveGuys();
	FT2.guardGate();
}