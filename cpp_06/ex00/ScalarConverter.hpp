#pragma once
#include <main.h>
#include <limits>    // numeric_limits
#include <cstdlib>   // strtod
#include <cmath>     // isnan

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& cp);
		ScalarConverter&operator=(const ScalarConverter& cp);
		~ScalarConverter();
	public:
		static void convert(const std::string& literal);
};
