/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:05:30 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/18 15:23:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <whatever.hpp>
#include <main.h>

int main()
{
	int a = 2, b = 3;
	float x = 10.1, y = 20.2;
	
	//std::cout << YELLOW << add(a, b) << RESET << std::endl;
	//std::cout << YELLOW << add(x, y) << RESET << std::endl;
	//std::cout << YELLOW << add(x, y) << RESET << std::endl;


	std::cout << YELLOW << "Max: " << max(a, b) << " Values	- a: " << a << " b: " << b << RESET << std::endl;
	std::cout << YELLOW << "Min: " << min(a, b) << " Values	- a: " << a << " b: " << b << RESET << std::endl;
	std::cout << YELLOW << "Before swap	- a: " << a << " b: " << b << RESET << std::endl;
	swap(a, b);
	std::cout << YELLOW << "After swap	- a: " << a << " b: " << b << RESET << std::endl;
	std::cout << std::endl;
	std::cout << YELLOW << "Max: " << max(x, y) << " Val	- x: " << x << " y: " << y << RESET << std::endl;
	std::cout << YELLOW << "Min: " << min(x, y) << " Val	- x: " << x << " y: " << y << RESET << std::endl;
	std::cout << YELLOW << "Before swap	- x: " << x << " y: " << y << RESET << std::endl;
	swap(x, y);
	std::cout << YELLOW << "After swap	- x: " << x << " y: " << y << RESET << std::endl;

	/*
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	*/
	return 0;
	
}
