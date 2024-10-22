/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:58:09 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/22 17:10:43 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

int main(void)
{
	try
	{
		Span sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << YELLOW << "Shortest span: " << sp.shortestSpan() << RESET << std::endl;
		std::cout << YELLOW << "Longest span: " << sp.longestSpan() << RESET << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	try
	{
		Span sp2(2);

		sp2.addNumber(8);

		std::cout << YELLOW << "Shortest span: " << sp2.shortestSpan() << RESET << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	srand(static_cast<unsigned int>(time(0)));
	try
	{
		Span sp3(10000);

		for (int i = 0; i < 10000; i++)
		{
			int rand_num = rand() % 10000;
			sp3.addNumber(rand_num);
		}

		std::cout << YELLOW << "Shortest span: " << sp3.shortestSpan() << RESET << std::endl;
        std::cout << YELLOW << "Longest span: " << sp3.longestSpan() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	
	return (0);
}