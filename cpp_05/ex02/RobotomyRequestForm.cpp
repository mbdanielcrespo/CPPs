/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:55:29 by marvin            #+#    #+#             */
/*   Updated: 2024/10/17 21:55:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>
#include <cstdlib> 

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default_target")
{
	std::cout << GREEN << "Default RobotomyRequestForm constructor called!" << RESET << std::endl; 
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << GREEN << "Default RobotomyRequestForm parameter constructor called!" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cp) : AForm(cp), _target(cp._target)
{
	std::cout << GREEN << "Default RobotomyRequestForm copy constructor called!" << RESET << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& cp)
{
	if (this != &cp) {
		AForm::operator=(cp);
		_target = cp._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED << "Default RobotomyRequestForm destructor called!" << RESET << std::endl;
}

void RobotomyRequestForm::executeAction() const
{
	std::cout << YELLOW << "Bzzt... Bzzt... Drilling noises..." << RESET << std::endl;

	if (std::rand() % 2 == 0)
		std::cout << YELLOW << _target << " has been robotomized successfully." << RESET << std::endl;
	else
		std::cout << YELLOW << "The robotomy on " << _target << " failed." << RESET << std::endl;
}