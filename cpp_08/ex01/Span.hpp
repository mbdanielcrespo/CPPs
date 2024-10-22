/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:20:39 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/22 17:11:25 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <main.h>
#include <vector>
#include <exception>
#include <algorithm>

class Span
{
	private:
		const unsigned int _N;
		std::vector<int> _numbers;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& cp);
		Span& operator=(const Span& cp);
		~Span();

		void			addNumber(unsigned int num);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		class NotEnoughSpace : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "EXCEPTION: Span size is insufficient!";
				}
		};
	
		class NotEnoughNumbersStoredException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "EXCEPTION: Span size is insufficient!";
				}
		};	
};

