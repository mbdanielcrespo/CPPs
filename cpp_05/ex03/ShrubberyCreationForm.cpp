/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:55:19 by marvin            #+#    #+#             */
/*   Updated: 2024/10/17 21:55:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default_target")
{
	std::cout << GREEN << "Default ShrubberyCreationForm constructor called!" << RESET << std::endl; 
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << GREEN << "Default ShrubberyCreationForm parameter constructor called!" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cp) : AForm(cp), _target(cp._target)
{
	std::cout << GREEN << "Default ShrubberyCreationForm copy constructor called!" << RESET << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& cp)
{
	if (this != &cp) {
		AForm::operator=(cp);
		_target = cp._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << RED << "Default ShrubberyCreationForm destructor called!" << RESET << std::endl;
}

void ShrubberyCreationForm::executeAction() const
{
	std::ofstream file((_target + "_shrubbery").c_str());
	if (file.is_open())
	{
		file << "        ooo\n";
		file << "       ooooo\n";
		file << "     oooooooooo";
		file << "    oooooooooooo\n";
		file << "    oooooooooooo\n";
		file << "     	  oo\n";
		file << "         oo\n";
		file.close();
		std::cout << YELLOW << "Shrubbery created at " << _target << "_shrubbery." << RESET << std::endl;
	}
	else
		std::cerr << RED << "Unable to create shrubbery file for target: " << _target << RESET << std::endl;
}
