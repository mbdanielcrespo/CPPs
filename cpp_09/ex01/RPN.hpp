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
#include <iostream>
#include <stack>


class RPN
{
	private:
		std::stack<int>		_values;
		std::stack<std::string>	_operators;
		
	public:
		RPN();
		RPN(const RPN& cp);
		RPN&operator=(const RPN& cp);
		~RPN();

		void	parseInput(const std::string& input);
		//performRPN();
};

