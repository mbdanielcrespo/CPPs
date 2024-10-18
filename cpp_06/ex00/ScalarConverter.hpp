/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:38:43 by marvin            #+#    #+#             */
/*   Updated: 2024/10/18 14:38:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
