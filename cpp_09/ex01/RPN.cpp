/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:50:39 by marvin            #+#    #+#             */
/*   Updated: 2024/11/14 10:50:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>

		//std::stack<int>		_values;
		//std::stack<char>	_operators;
		
RPN::RPN()
{
	if (DEBUG == DEBUG_ON)
		PRINT_COLOR(GREEN, DEFAULT_CONSTRUCTOR);
}

RPN::RPN(const RPN& cp) : _values(cp._values), _operators(cp._operators)
{
	if (DEBUG == DEBUG_ON)
		PRINT_COLOR(GREEN, COPY_CONSTRUCTOR);
}

RPN& RPN::operator=(const RPN& cp)
{
	if (DEBUG == DEBUG_ON)
		PRINT_COLOR(GREEN, ASSIGNMENT_OPERATOR);

	if (this != &cp)
	{
		_values = cp._values;
		_operators = cp._operators;
	}
	return (*this);
}

RPN::~RPN()
{
	if (DEBUG == DEBUG_ON)
		PRINT_COLOR(RED, DEFAULT_DESTRUCTOR);
}

static bool isValidNumber(const std::string& token)
{
	if (token.length() != 1)
		return (FALSE);
	return (isdigit(token[0]));
}

static bool isValidOperator(const std::string& token)
{
	if (token.length() != 1)
		return (FALSE);
	for (size_t i = 0; i <= 3; i++)
	{
		if (token == OPERATORS_VALS[i])
			return (TRUE);
	}
	return (FALSE);
	
}

RPN::parseInput(const std::string)
{

}



RPN::performRPN();