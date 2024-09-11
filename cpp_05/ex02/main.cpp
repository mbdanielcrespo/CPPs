#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

int main()
{
    try
    {
        Bureaucrat bob("Bob", 2);
        ShrubberyCreationForm shrubbery("Home");
        RobotomyRequestForm robotomy("Alice");
        PresidentialPardonForm pardon("Charlie");

        shrubbery.beSigned(bob);
        robotomy.beSigned(bob);
        pardon.beSigned(bob);

    
        bob.executeForm(shrubbery);
        bob.executeForm(robotomy);
        bob.executeForm(pardon);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

