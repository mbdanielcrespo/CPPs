/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:30:27 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/12 14:06:22 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <main.h>

int	main(void)
{
	ClapTrap CT1("Daniel", 10, 10, 0);
	ClapTrap CT2(CT1);

	CT2.attack("Pakito");
	CT2.takeDamage(27);
	CT2.beRepaired(21);
	std::cout << std::endl;
	CT2.printStats();
}


//A;
//B(A);
//C = A;
//std::cout << CYAN << "Address of a: 					" << &A << RESET << std::endl;
//std::cout << CYAN << "Address of b (copy constructed from a): 	" << &B << RESET << std::endl;
//std::cout << CYAN << "Address of c (assigned from a): 		" << &C << RESET << std::endl;

