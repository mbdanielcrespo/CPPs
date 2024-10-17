#include <Bureaucrat.hpp>
#include <Form.hpp>

int main()
{
    try
	{
        Bureaucrat a("Juan", 120);
		std::cout << a << std::endl;
		//Bureaucrat b("Paco", 200);
		//std::cout << b << std::endl;
        Form form1;
        std::cout << form1 << std::endl;
        Form form2("Diagnostic", 150, 100);
        std::cout << form2 << std::endl;
        Form form3("Medical", 120, 100);
        std::cout << form3 << std::endl;
        Form form4("Clinical", 50, 100);
        std::cout << form4 << std::endl;
        form4.beSigned(a);
        form3.beSigned(a);
        std::cout << form4 << std::endl;
        std::cout << form3 << std::endl;
        form2.beSigned(a);
        std::cout << form2 << std::endl;
        

    }
    catch (const std::exception& e)
    {   
        std::cerr << RED << e.what() << RESET << std::endl;
    }
    /*
	catch (const Bureaucrat::GradeTooHighException& e)
	{
        std::cerr << RED << e.what() << RESET << std::endl;
    }
	catch (const Bureaucrat::GradeTooLowException& e)
	{
        std::cerr << RED << e.what() << RESET << std::endl;
    }
    catch (const Form::GradeTooHighException& e)
	{
        std::cerr << RED << e.what() << RESET << std::endl;
    }
    catch (const Form::GradeTooLowException& e)
	{
        std::cerr << RED << e.what() << RESET << std::endl;
    }
	catch (const std::exception& e)
	{
        std::cerr << RED << "An unexpected error occurred: " << RESET << e.what() << std::endl;
    }
    */
    return 0;
}
