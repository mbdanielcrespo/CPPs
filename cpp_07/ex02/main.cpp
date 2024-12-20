/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:05:30 by danalmei          #+#    #+#             */
/*   Updated: 2024/11/04 12:31:16 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>
#include <Array.hpp>

int main()
{
	Array<int> intArray(5);
	for (unsigned int i = 0; i < intArray.size(); i++)
		intArray[i] = i + 1;

	std::cout << YELLOW << "IntArray: " << RESET << std::endl;
	for (unsigned int i = 0; i < intArray.size(); i++)
		std::cout << YELLOW << intArray[i] << ", " << RESET << std::endl;

	Array<std::string> strArray(5);
	strArray[0] = "You";
	strArray[1] = "are";
	strArray[2] = "my";
	strArray[3] = "fire";
	strArray[4] = "...";

	std::cout << YELLOW << "StrArray: " << RESET << std::endl;
	for (unsigned int i = 0; i < strArray.size(); i++)
		std::cout << YELLOW << strArray[i] << " " << RESET << std::endl;

	return (0);
}
