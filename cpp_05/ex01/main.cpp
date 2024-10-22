#include <Bureaucrat.hpp>
#include <Form.hpp>

int main()
{
	try
	{
		Bureaucrat a("Juan", 120);
		std::cout << a << std::endl;

		std::cout << std::endl;

		Form form2("Medical", 120, 100);
		std::cout << form2 << std::endl;
		Form form3("Diagnostic", 100, 100);
		std::cout << form3 << std::endl;
		Form form4("Clinical", 1, 100);
		std::cout << form4 << std::endl;

		std::cout << std::endl;

		form2.beSigned(a);
		std::cout << form2 << std::endl;
		form3.beSigned(a);
		std::cout << form3 << std::endl;
		form4.beSigned(a);
		std::cout << form4 << std::endl;
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
