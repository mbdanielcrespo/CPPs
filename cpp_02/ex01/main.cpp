/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:25:04 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:25:05 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <iostream>
#include <cmath>

int	main( void ) {
	Fixed		a;
	Fixed const	b( 10 );
	Fixed const	c( 42.42f );
	Fixed const	d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a  << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as an integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as an integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as an integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as an integer" << std::endl;

	// std::cout << (4 << 1) << std::endl;
	// std::cout << (4 >> 1) << std::endl;

	// std::cout << (243.654f * (1 << 8)) << std::endl;
	return 0;
}