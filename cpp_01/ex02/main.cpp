/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:17:29 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/09 16:34:15 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string variable = "HI THIS IS BRAIN";
	std::string *stringPTR = &variable;
	std::string &stringREF = variable;

	std::cout << "String reference (&var):	" << &variable << std::endl;
	std::cout << "String ponter:			" << stringPTR << std::endl;
	std::cout << "String reference:		" << &stringREF << std::endl;

	// actual value of variable
	std::cout << "String value:			" << variable << std::endl;
	// memory address of stringPTR itself,
	std::cout << "String pointer reference:	" << &stringPTR << std::endl;
	// memory address of the reference stringREF
	std::cout << "String reference pointer:	" << &stringREF << std::endl;
}


