#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

int main()
{
	try 
	{
		Bureaucrat npc1("npc1", 140);
		Bureaucrat npc2("npc2", 130);


		ShrubberyCreationForm shrubbery("home");	//	145, 137
		std::cout << shrubbery << std::endl;
		RobotomyRequestForm robotomy("victim");		// 	72, 45
		std::cout << robotomy << std::endl;
		PresidentialPardonForm pardon("criminal");	//	25, 5
		std::cout << pardon << std::endl;

		std::cout << std::endl;

		npc1.signForm(robotomy);
		npc1.signForm(pardon);
		npc1.signForm(shrubbery);

		std::cout << std::endl;

		npc1.executeForm(shrubbery);
		npc2.executeForm(shrubbery);
		npc1.executeForm(robotomy); 
		npc1.executeForm(pardon);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

