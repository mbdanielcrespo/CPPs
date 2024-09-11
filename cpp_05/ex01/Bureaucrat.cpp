#include <Bureaucrat.hpp>
#include <Form.hpp>

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(100)
{
	std::cout << GREEN << "Default Bureaucrat constructor called!" << RESET << std::endl; 
}

Bureaucrat::~Bureaucrat()
{
	std::cout << RED << "Default Bureaucrat destructor called!" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& cp) : _name(cp._name), _grade(cp._grade)
{
	std::cout << GREEN << "Default Bureaucrat copy constructor called!" << RESET << std::endl; 
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat cp)
{
	std::cout << GREEN << "Default Bureaucrat assignment operator called!" << RESET << std::endl; 
	if (this != &cp)
		_grade = cp._grade;
	return (*this);
}

const std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (_grade < 1)
	{
		throw GradeTooHighException();
	}
	else if (_grade > 150)
	{
		throw GradeTooLowException();
	}
}

void Bureaucrat::signForm(Form& form)
{
	if (form.beSigned(*this))
		std::cout << YELLOW << this->getName() << " signed " << form.getName() << RESET << std::endl;
	else
		std::cout << YELLOW << this->getName() << " couldn't sign " << form.getName() << " because grade was too low" << RESET << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
    os << YELLOW << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << RESET;
    return os;
}

