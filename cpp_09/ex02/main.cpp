/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:58:09 by danalmei          #+#    #+#             */
/*   Updated: 2024/11/15 18:23:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>
#include <main.h>

# define DB_FILENAME "data.csv"

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " \"expression\"" << std::endl;
		return EXIT_FAILIURE;
	}
	
	RPN rpn;
	std::string input = argv[1];
	if (!rpn.performRPN(input))
	{
		//PRINT_COLOR(RED, "Invalid input!");
		return EXIT_FAILIURE_BYPASS;
	}
	
	return EXIT_SUCCESS;
}