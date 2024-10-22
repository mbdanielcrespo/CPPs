/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:05:30 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/22 16:17:59 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>
#include <vector>
#include <list>
#include <deque>
#include <iostream>

int main()
{
	// vector
	try
	{
		std::vector<int> vec;
		vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);
        vec.push_back(40);
        vec.push_back(50);
		
		std::vector<int>::iterator it;

		std::cout << YELLOW << "Testing with vector:" << RESET << std::endl;
		it = easyfind(vec, 30);
		std::cout << GREEN << "Found: " << *it << RESET << std::endl;

		std::cout << YELLOW << "Testing with vector (value not found):" << RESET << std::endl;
		it = easyfind(vec, 100);
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	// list
	try
	{
		std::list<int> lst;
		lst.push_back(5);
        lst.push_back(10);
        lst.push_back(15);
        lst.push_back(20);
        lst.push_back(25);
		
		std::list<int>::iterator it;
		
		std::cout << YELLOW << "Testing with list:" << RESET << std::endl;
		it = easyfind(lst, 15);
		std::cout << GREEN << "Found: " << *it << RESET << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	// deque
	try
	{
		std::deque<int> deq;
		deq.push_back(100);
        deq.push_back(200);
        deq.push_back(300);
        deq.push_back(400);
        deq.push_back(500);
		
		std::deque<int>::iterator it;

		std::cout << YELLOW << "Testing with deque:" << RESET << std::endl;
		it = easyfind(deq, 400);
		std::cout << GREEN << "Found: " << *it << RESET << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}