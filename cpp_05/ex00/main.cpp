/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:06:12 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:06:12 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

int main()
{
    try 
	{
        Bureaucrat a("Juan", 120);
		std::cout << YELLOW << a << RESET << std::endl;
		Bureaucrat b("Paco", 200);
		std::cout << YELLOW << a << RESET << std::endl;
    } 
	catch (const Bureaucrat::GradeTooHighException& e)
	{
        std::cerr << RED << e.what() << RESET << std::endl;
    }
	catch (const Bureaucrat::GradeTooLowException& e)
	{
        std::cerr << RED << e.what() << RESET << std::endl;
    }
	catch (const std::exception& e)
	{
        std::cerr << RED << "An unexpected error occurred: " << RESET << e.what() << std::endl;
    }
    
    return 0;
}
