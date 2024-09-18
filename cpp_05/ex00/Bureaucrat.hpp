/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:06:03 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:06:03 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

class Bureaucrat
{
	private:
		const std::string _name;
		int	_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat& cp);
		Bureaucrat&operator=(const Bureaucrat cp);
		~Bureaucrat();

		Bureaucrat(std::string _name, int grade);

		const std::string getName(void) const;
		int getGrade(void) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Bureaucrat grade is too high";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Bureaucrat grade was too low";
				}
		};

		friend std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
};
