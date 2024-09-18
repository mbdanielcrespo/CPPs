/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:30:27 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:30:28 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <main.h>

int	main(void)
{
	ClapTrap CT1("Daniel", 50, 4, 10);
	ClapTrap CT2(CT1);

	CT2.attack("Pakito");
	CT2.takeDamage(27);
	CT2.beRepaired(21);
	CT2.printStats();
}