#include <Bureaucrat.hpp>
#include <Intern.hpp>

int main()
{
	try
	{
		Intern someRandomIntern;

        AForm* form2 = someRandomIntern.makeForm("unknown form", "Target");

        Bureaucrat npc1("npc1", 140);

        AForm* form1 = someRandomIntern.makeForm("robotomy request", "Bender");
        AForm* shrubbery = someRandomIntern.makeForm("shrubbery creation", "Home");
        AForm* pardon = someRandomIntern.makeForm("presidential pardon", "Criminal");

        if (form1) std::cout << *form1 << std::endl;
        if (shrubbery) std::cout << *shrubbery << std::endl;
        if (pardon) std::cout << *pardon << std::endl;

        npc1.signForm(*form1);    
        npc1.signForm(*shrubbery);
        npc1.signForm(*pardon);   

        npc1.executeForm(*shrubbery);
        npc1.executeForm(*form1);    
        npc1.executeForm(*pardon);   

        delete form1;
        delete shrubbery;
        delete pardon;
        delete form2;
    }
	catch (const std::exception& e)
	{
        std::cerr << e.what() << std::endl;
    }
    return 0;
}

