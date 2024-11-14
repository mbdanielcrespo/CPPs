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
		if (token == "*" || token == "/" || token == "+" || token == "-")
			return (TRUE);
	}
	return (FALSE);
	
}

void	RPN::parseInput(const std::string& input)
{
	std::string	token;

	for(size_t i = 0; i < input.length(); i++)
	{
		if (input[i] == ' ')
		{
			if (!token.empty())
			{
				if (isValidNumber(token))
				{
					_values.push(atoi(token.c_str()));
					std::cout << "Number pushed: " << token << std::endl;
				}
				else if (isValidOperator(token))
				{
					_operators.push(token.c_str());
					std::cout << "Operator pushed: " << token << std::endl;
				}
				else
					std::cout << RED << "Invalid token!" << RESET << token << std::endl;
			}
			token.clear();
		}
		else
			token += input[i];
	}

	if (!token.empty())
	{
        if (isValidNumber(token))
		{
            _values.push(atoi(token.c_str()));
			if (DEBUG == DEBUG_ON)
            	std::cout << YELLOW << "Number pushed: " << token << RESET << std::endl;
        }
        else if (isValidOperator(token))
		{
            _operators.push(token.c_str());
			if (DEBUG == DEBUG_ON)
	            std::cout << YELLOW << "Operator pushed: " << token << RESET << std::endl;
        }
        else
            std::cout << "Invalid token: " << token << std::endl;
    }

    std::cout << "\nFinal Numbers Stack (top to bottom): ";
    std::stack<int> tempNum = _values;
    while (!tempNum.empty())
	{
        std::cout << tempNum.top() << " ";
        tempNum.pop();
    }
    
    std::cout << "\nFinal Operators Stack (top to bottom): ";
    std::stack<std::string> tempOp = _operators;
    while (!tempOp.empty())
	{
        std::cout << tempOp.top() << " ";
        tempOp.pop();
    }
    std::cout << std::endl;
}

static int	operate(int num1, int num2, std::string operand)
{
	if (operand == "+")
		return (num1 + num2);
	else if (operand == "-")
		return (num1 + num2);
	else if (operand == "*")
		return (num1 + num2);
	else if (operand == "/")
		return (num1 + num2);
	else
		PRINT_COLOR(RED, "Something very wired happend!");
}

RPN::performRPN()
{
	int	last = 0;
	int	res = 0;

	last = _values.top();
	_values.pop();

	while (!_values.empty())
	{
		res = operate(last, res, _operators.top())
	}
}