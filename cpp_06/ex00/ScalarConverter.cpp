/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:38:46 by marvin            #+#    #+#             */
/*   Updated: 2024/10/24 15:31:14 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

ScalarConverter::ScalarConverter()
{
	std::cout << GREEN << "Default ScalarConverter constructor called!" << RESET << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& cp)
{
	std::cout << GREEN << "Default ScalarConverter copy constructor called!" << RESET << std::endl;
	*this = cp;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& cp)
{
	std::cout << GREEN << "Default ScalarConverter assignment operator called!" << RESET << std::endl;
	if (this != &cp)
	{
    }
    return *this;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << RED << "Default ScalarConverter desstructor called!" << RESET << std::endl;
}

static void toChar(double value)
{
	if (value >= 32 && value <= 126)
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	else if (value < 0 || value > 255)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

static void toInt(double value)
{
	if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min() || std::isnan(value))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
}

static void toFloat(double value)
{
	float floatValue = static_cast<float>(value);
	std::cout << "float: " << floatValue;
	
	if (floatValue == static_cast<int>(floatValue))
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
}

static void toDouble(double value)
{
	std::cout << "double: " << value;

	if (value == static_cast<int>(value))
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
}

static bool handleExceptions(const std::string& literal)
{
	if (literal == "+inff" || literal == "+inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return true;
	}
	else if (literal == "-inff" || literal == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return true;
	}
	else if (literal == "nanf" || literal == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return true;
	}
	return false;
}

static bool handleChar(const std::string& literal)
{
	if (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')
	{
		char c = literal[1];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
		return true;
	}
	return false;
}

void ScalarConverter::convert(const std::string& literal)
{
	if (handleExceptions(literal))
		return;
	if (handleChar(literal))
		return;
	try
	{
		double value = std::strtod(literal.c_str(), NULL);
		toChar(value);
		toInt(value);
		toFloat(value);
		toDouble(value);
	}
	catch (std::invalid_argument&)
	{
		std::cout << RED << "Error: Invalid literal" << RESET << std::endl;
	}
	catch (std::out_of_range&)
	{
		std::cout << RED << "Error: Literal out of range" << RESET << std::endl;
	}
}