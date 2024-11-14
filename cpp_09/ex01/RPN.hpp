/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:35:14 by marvin            #+#    #+#             */
/*   Updated: 2024/11/14 10:35:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <main.h>
#include <stack>
#include <cctype>

class RPN
{
	private:
		std::stack<int>		values;
		std::stack<char>	operators;
		
	public:
		RPN();
		RPN(const RPN& cp);
		RPN&operator=(const RPN& cp);
		~RPN();

		parseInput();
		performRPN();
};

