/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:26:12 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:26:12 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <iostream>
#include <cmath>
#include <main.h>

int	main(void)
{
	Fixed	a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << "Initial values:\n";
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	std::cout << YELLOW << "\nTesting increment operators:\n" << RESET;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a after ++a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a after a++: " << a << std::endl;

	Fixed c = Fixed(10);
	Fixed d = Fixed(2.5f);

	std::cout << YELLOW << "\nTesting arithmetic operations:\n" << RESET;
	std::cout << "c + d: " << c + d << std::endl;
	std::cout << "c - d: " << c - d << std::endl;
	std::cout << "c * d: " << c * d << std::endl;
	std::cout << "c / d: " << c / d << std::endl;

	std::cout << YELLOW << "\nTesting comparison operators:\n" << RESET;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;

	std::cout << YELLOW << "\nTesting min and max functions:\n" << RESET;
	std::cout << "Fixed::min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "Fixed::max(a, b): " << Fixed::max(a, b) << std::endl;

	return 0;
}