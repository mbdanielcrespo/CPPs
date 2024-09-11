#include <Bureaucrat.hpp>
#include <Form.hpp>

int main()
{
    try
	{
        Bureaucrat b;
		std::cout << b << std::endl;
		//Bureaucrat a("Paco", 200);

        Form form1;
        std::cout << form1 << std::endl;
        //Form form2("Diagnostic", 200, 100);
        //Form form3("Medical", 120, 100);
        Form form4("Medical", 50, 100);
        //form3.beSigned(b);
        //std::cout << form3 << std::endl;
        form4.beSigned(b);
        std::cout << form4 << std::endl;
        

    }
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
    return 0;
}
