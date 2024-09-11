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

AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    
    AForm* (Intern::*formCreators[3])(const std::string& target) =
	{
        &Intern::createShrubberyForm,
        &Intern::createRobotomyForm,
        &Intern::createPardonForm
    };

    for (int i = 0; i < 3; i++)
	{
        if (formName == formNames[i])
		{
            std::cout << YELLOW << "Intern creates " << formName << " form." << RESET << std::endl;
            return (this->*formCreators[i])(target);
        }
    }

    std::cerr << YELLOW << "Error: Form name '" << formName << "' not recognized." << RESET << std::endl;
    return NULL;
}

AForm* Intern::createShrubberyForm(const std::string& target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomyForm(const std::string& target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::createPardonForm(const std::string& target)
{
    return new PresidentialPardonForm(target);
}