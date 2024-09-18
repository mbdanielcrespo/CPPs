/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:32:20 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:32:21 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>
#include <main.h>

int	main(void)
{
	FragTrap FT2("Pakito");

	FT2.attack("Bully");
	FT2.takeDamage(27);
	FT2.beRepaired(21);
	FT2.printStats();
	FT2.highFiveGuys();
	FT2.guardGate();
}