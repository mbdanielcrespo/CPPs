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
		AForm(const std::string name, const int req_grade, const int exec_grade);
		virtual ~AForm(void);

		const std::string getName(void) const;
		bool isSigned(void) const;
		int getReqGrade(void) const;
		int getExecGrade(void) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "AForm grade is too high";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "AForm grade was too low";
				}
		};

		class FormNotSignedException : public std::exception {
		public:
			const char* what() const throw() {
				return "Form is not signed!";
			}
		};

		bool beSigned(Bureaucrat& bur);
		friend std::ostream& operator<<(std::ostream& os, const AForm& obj);
		virtual void execute(Bureaucrat const & executor) const = 0;
};
