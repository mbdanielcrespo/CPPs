#pragma once
#include <main.h>
#include <AForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>


class Intern
{
	public:
		Intern(void);
		Intern(const Intern& cp);
		Intern&operator=(const Intern& cp);
		~Intern();

		AForm* makeForm(const std::string& name, const std::string& target);
};
