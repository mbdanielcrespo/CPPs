/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:25:04 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/11 18:28:16 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <iostream>
#include <cmath>

int	main (void)
{
	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);
	a = Fixed(1234.4321f);

	std::cout << "a is " << a  << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl; 	
	std::cout << std::endl;
	std::cout << "a is " << a.toInt() << " as an integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as an integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as an integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as an integer" << std::endl;
	std::cout << std::endl;
	std::cout << "a is " << a.toFloat() << " as an float" << std::endl;
	std::cout << "b is " << b.toFloat() << " as an float" << std::endl;
	std::cout << "c is " << c.toFloat() << " as an float" << std::endl;
	std::cout << "d is " << d.toFloat() << " as an float" << std::endl;

	return 0;
}