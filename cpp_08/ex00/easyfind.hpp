/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:48:44 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/23 12:51:19 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <main.h>
#include <vector>
#include <exception>
#include <algorithm>

class ValeNotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "EXCEPTION: Value Not Found!";
		}  
};

template<typename T>
typename T::iterator	easyfind(T& container, int num)
{
	typename T::iterator it = std::find(container.begin(), container.end(), num);

	if (it != container.end())
		return it;
	else
		throw ValeNotFoundException();
}

template<typename T>
void	printElements(T& container)
{
	typename T::iterator it;
	
	for (it = container.begin(); it != container.end(); it++)
		std::cout << CYAN << *it << " " << RESET;
	std::cout << std::endl;
}