/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:05:55 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:05:55 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

Bureaucrat::~Bureaucrat()
{
	std::cout << RED << "Default Bureaucrat destructor called!" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(100)
{
	std::cout << GREEN << "Default Bureaucrat constructor called!" << RESET << std::endl; 
}

Bureaucrat::Bureaucrat(const Bureaucrat& cp) : _name(cp._name), _grade(cp._grade)
{
	std::cout << GREEN << "Default Bureaucrat copy constructor called!" << RESET << std::endl; 
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat cp)
{
	std::cout << GREEN << "Default Bureaucrat assignment operator called!" << RESET << std::endl; 
	if (this != &cp)
		_grade = cp._grade;
	return (*this);
}

const std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << GREEN << "Bureaucrat Atribute constructor called! GRADE(" << this->_grade << ")" << RESET << std::endl;
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::incrementGrade(void)
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void Bureaucrat::incrementGrade(int val)
{
	if (_grade - val < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade -= val;
}

void Bureaucrat::decrementGrade(int val)
{
	if (_grade + val > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade += val;
}

void Bureaucrat::signForm(AForm& form)
{
    try
	{
        form.beSigned(*this);
        std::cout << CYAN << _name << " signed " << form.getName() << RESET << std::endl;
    }
	catch (const std::exception& e)
	{
        std::cout << RED << _name << " couldn’t sign " << form.getName() << " because " << e.what() << RESET << std::endl;
    }
}

void	Bureaucrat::executeForm(const AForm& form)
{
	try
	{
		form.execute(*this);
		std::cout << CYAN << _name << " executed " << form.getName() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << this->_name << " couldn't execute " << form.getName() << " because " << e.what() << RESET << std::endl;
	}
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << YELLOW << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << RESET; 
	return os;
}

