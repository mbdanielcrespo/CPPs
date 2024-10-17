#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

int main()
{
	try {
		Bureaucrat npc1("npc1", 140);

		ShrubberyCreationForm shrubbery("home");
		std::cout << shrubbery << std::endl;
		RobotomyRequestForm robotomy("victim");
		std::cout << robotomy << std::endl;
		PresidentialPardonForm pardon("criminal");
		std::cout << pardon << std::endl;

		npc1.signForm(robotomy);
		npc1.signForm(pardon);
		npc1.signForm(shrubbery);

		npc1.executeForm(shrubbery);  // npc2 has the grade to execute shrubbery
		npc1.executeForm(robotomy);   // npc1 executes robotomy
		npc1.executeForm(pardon);     // npc1 executes pardon
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

