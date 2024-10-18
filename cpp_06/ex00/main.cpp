/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:38:56 by marvin            #+#    #+#             */
/*   Updated: 2024/10/18 14:40:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

int main()
{
	//ScalarConverter a;
	
	ScalarConverter::convert("0");
	std::cout << std::endl;
	ScalarConverter::convert("42");
	std::cout << std::endl;
	ScalarConverter::convert("4.2f");
	std::cout << std::endl;
	ScalarConverter::convert("'a'");
	std::cout << std::endl;
	ScalarConverter::convert("+inf");
	std::cout << std::endl;
	ScalarConverter::convert("-inff");
	std::cout << std::endl;
	ScalarConverter::convert("nanf");
	std::cout << std::endl;
	ScalarConverter::convert("invalid");

	return 0;
}