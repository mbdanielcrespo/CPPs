#include <Intern.hpp>

Intern::Intern(void)
{
	std::cout << GREEN << "Default Intern constructor called!" << RESET << std::endl; 
}

Intern::Intern(const Intern& cp)
{
	std::cout << GREEN << "Default Intern copy constructor called!" << RESET << std::endl;
	(void)cp;
}

Intern& Intern::operator=(const Intern& cp)
{
	std::cout << GREEN << "Default Intern assignment operator called!" << RESET << std::endl; 
	(void)cp;
	return *this;
}

Intern::~Intern()
{
	std::cout << RED << "Default Intern destructor called!" << RESET << std::endl;
}

AForm* createShrubbery(const std::string& target)
{
	return new ShrubberyCreationForm(target);
}

AForm* createRobotomy(const std::string& target)
{
	return new RobotomyRequestForm(target);
}

AForm* createPresidential(const std::string& target)
{
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
	std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	AForm* (*formCreationFunctions[3])(const std::string&) =
	{
		&createShrubbery,
		&createRobotomy,
		&createPresidential
	};

	for (int i = 0; i < 3; ++i)
	{
		if (formNames[i] == formName)
		{
			std::cout << YELLOW << "Intern creates " << formName << RESET << std::endl;
			return formCreationFunctions[i](target);
		}
	}


	std::cerr << RED << "Error: Form name '" << formName << "' not recognized." << RESET << std::endl;
	return NULL;
}

