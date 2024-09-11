#include <PresidentialPardonForm.hpp>

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default_target")
{
	std::cout << GREEN << "Default PresidentialPardonForm constructor called!" << RESET << std::endl; 
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << GREEN << "Default PresidentialPardonForm parameter constructor called!" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& cp) : AForm(cp), _target(cp._target)
{
	std::cout << GREEN << "Default PresidentialPardonForm copy constructor called!" << RESET << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& cp)
{
	if (this != &cp) {
		AForm::operator=(cp);
		_target = cp._target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << RED << "Default PresidentialPardonForm destructor called!" << RESET << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    if (!isSigned())
        throw AForm::GradeTooLowException();
    if (executor.getGrade() > getExecGrade())
        throw AForm::GradeTooLowException();

    std::cout << YELLOW << _target << " has been pardoned by Zaphod Beeblebrox." << RESET << std::endl;
}