/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
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

class Form
{
	private:
		const std::string _name;
		bool _is_signed;
		const int _req_grade;
		const int _exec_grade;
	public:
		Form(void);
		Form& operator=(const Form& cp);
		Form(const Form& cp);
		~Form(void);

		Form(const std::string name, const int req_grade, const int exec_grade);

		const std::string getName(void) const;
		bool getSigning(void) const;
		int getReqGrade(void) const;
		int getExecGrade(void) const;
		void beSigned(Bureaucrat& bur);

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
};

std::ostream& operator<<(std::ostream& os, const Form& obj);
