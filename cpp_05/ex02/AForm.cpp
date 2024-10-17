/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:06:34 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:06:34 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

AForm::AForm(void) : _name("Default AForm"),  _is_signed(false), _req_grade(100), _exec_grade(100)
{
	std::cout << GREEN << "Default AForm constructor called!" << RESET << std::endl; 
}

AForm::~AForm()
{
	std::cout << RED << "Default AForm destructor called!" << RESET << std::endl;
}

AForm::AForm(const AForm& cp) : _name(cp._name),  _is_signed(cp._is_signed), _req_grade(cp._req_grade),  _exec_grade(cp._exec_grade)
{
	std::cout << GREEN << "Default AForm copy constructor called!" << RESET << std::endl; 
}

AForm& AForm::operator=(const AForm& cp)
{
    if (this != &cp)
        _is_signed = cp._is_signed;
    return *this;
}

AForm::AForm(const std::string name, const int req_grade, const int exec_grade)
 : 	_name(name),
 	_is_signed(false),
	_req_grade(req_grade),
	_exec_grade(exec_grade)
{
	std::cout << GREEN << "Parameter AForm constructor called!" << RESET << std::endl;
	if (_req_grade < 1 || _exec_grade < 1)
		throw AForm::GradeTooHighException();
	if (_req_grade > 150 || _exec_grade > 150)
		throw AForm::GradeTooLowException();
}

const std::string AForm::getName(void) const
{
	return _name;
}

bool AForm::getSigning(void) const
{
	return _is_signed;
}

int AForm::getReqGrade(void) const
{
	return _req_grade;
}

int AForm::getExecGrade(void) const
{
	return _exec_grade;
}

void AForm::beSigned(const Bureaucrat& bur)
{
	if (bur.getGrade() < this->_req_grade)
		throw AForm::GradeTooLowException();
	this->_is_signed = true;
	std::cout << CYAN << "Form " << this->_name << " has been successfully signed by " << bur.getName() << "!" << RESET << std::endl;
}

void AForm::execute(const Bureaucrat& bur) const
{
	if (!this->_is_signed)
		throw AForm::FormNotSignedException();
	if (bur.getGrade() < this->_exec_grade)
		throw AForm::GradeTooLowException();
	executeAction();
}

std::ostream& operator<<(std::ostream& os, const AForm& obj)
{
	os << YELLOW << "Form: " << obj.getName() << " with signing grade of " << obj.getReqGrade();
	if (obj.getSigning())
		os << " has been signed" << RESET;
	else 
		os << " has not been signed" << RESET;
	return os;
}
