/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:06:34 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:06:34 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

Form::Form(void) : _name("Default form"),  _is_signed(false), _req_grade(100), _exec_grade(100)
{
	std::cout << GREEN << "Default Form constructor called!" << RESET << std::endl; 
}

Form::~Form()
{
	std::cout << RED << "Default Form destructor called!" << RESET << std::endl;
}

Form::Form(const Form& cp) : _name(cp._name),  _is_signed(cp._is_signed), _req_grade(cp._req_grade),  _exec_grade(cp._exec_grade)
{
	std::cout << GREEN << "Default Form copy constructor called!" << RESET << std::endl; 
}

Form& Form::operator=(const Form& cp)
{
    if (this != &cp)
        _is_signed = cp._is_signed;
    return *this;
}

Form::Form(const std::string name, const int req_grade, const int exec_grade) : _name(name),  _is_signed(false), _req_grade(req_grade), _exec_grade(exec_grade)
{
	std::cout << GREEN << "Parameter Form constructor called!" << RESET << std::endl;
	if (_req_grade < 1 || _exec_grade < 1)
	{
		throw GradeTooHighException();
	}
	else if (_req_grade > 150 || _exec_grade > 150)
	{
		throw GradeTooLowException();
	}
}

const std::string Form::getName(void) const
{
	return _name;
}

bool Form::getSigning(void) const
{
	return _is_signed;
}

int Form::getReqGrade(void) const
{
	return _req_grade;
}

int Form::getExecGrade(void) const
{
	return _exec_grade;
}

void Form::beSigned(Bureaucrat& bur)
{
	if (bur.getGrade() > this->_req_grade)
		throw Form::GradeTooLowException();
	this->_is_signed = true;
	std::cout << CYAN << "Form " << this->_name << " has been successfully signed by " << bur.getName() << "!" << RESET << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
	os << YELLOW << "Form: " << obj.getName() << " with signing grade of " << obj.getReqGrade();
	if (obj.getSigning())
		os << " has been signed" << RESET;
	else 
		os << " has not been signed" << RESET;
	return os;
}
