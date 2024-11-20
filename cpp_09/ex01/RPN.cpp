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

#include <string>
#include <cctype>
#include <cstdlib>
#include <RPN.hpp>
#include <sstream>

		
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
		PRINT_ERROR(RED, DEFAULT_DESTRUCTOR);
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
		if (token == "*" || token == "/" || token == "+" || token == "-")
			return (TRUE);
	}
	return (FALSE);
	
}

static int	operate(int num1, int num2, std::string operand)
{
	if (operand == "+")
		return (num1 + num2);
	else if (operand == "-")
		return (num1 - num2);
	else if (operand == "*")
		return (num1 * num2);
	else if (operand == "/")
	{
		if (num2 == 0)
		{
			PRINT_ERROR(RED, ERR_MSG_DIV_BY_0);
			exit(EXIT_FAILURE);
		}
		return (num1 / num2);
	}
	PRINT_ERROR(RED, ERR_MSG_UNEXPECTED);
	return (0);
}

bool	RPN::performRPN(const std::string &input)
{
	std::istringstream stream(input);
	std::string token;
	int finalResult;

	while (stream >> token)
	{
		if (DEBUG == DEBUG_ON)
			PRINT_COLOR(GREEN, token);

		if (isValidNumber(token))
		{
			int number = std::atoi(token.c_str());
			_values.push(number);
		}

		else if (isValidOperator(token))
		{
			if (_values.size() < 2)
			{
				PRINT_ERROR(RED, ERR_MSG_2);
				return (0);
				continue ;
			}

			int num2 = _values.top();
			_values.pop();
			int num1 = _values.top();
			_values.pop();
			int result = operate(num1, num2, token);
			_values.push(result);

			if (DEBUG == DEBUG_ON)
				std::cout << "Performed operation: " << num1 << " " << token << " " << num2 << " = " << result << std::endl;
		}
		else
		{
			PRINT_ERROR(RED, ERR_MSG_3);
			return (0);
		}

		if (_values.size() == 1)
			finalResult = _values.top();
		//else
		//	PRINT_ERROR(RED, ERR_MSG_1);
	}

	if (_values.size() != 1)
	{
		PRINT_ERROR(RED, ERR_MSG_1);
		return (0);
	}

	finalResult = _values.top();
	PRINT_COLOR(GREEN, finalResult);
	return (1);
}