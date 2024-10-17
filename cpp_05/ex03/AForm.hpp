/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:09:40 by marvin            #+#    #+#             */
/*   Updated: 2024/10/17 21:09:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <Bureaucrat.hpp>
#include <main.h>

class Bureaucrat;	

class AForm
{
	private:
		const std::string _name;
		bool _is_signed;
		const int _req_grade;
		const int _exec_grade;
	public:
		AForm(void);
		AForm& operator=(const AForm& cp);
		AForm(const AForm& cp);
		virtual ~AForm(void);

		AForm(const std::string name, const int req_grade, const int exec_grade);

		const std::string getName(void) const;
		bool getSigning(void) const;
		int getReqGrade(void) const;
		int getExecGrade(void) const;

		void beSigned(const Bureaucrat& bur);
		void execute(const Bureaucrat &bur) const;
		virtual void executeAction() const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Form grade is too high";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Form grade was too low";
				}
		};

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Form was't signed";
				}
		};
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);
