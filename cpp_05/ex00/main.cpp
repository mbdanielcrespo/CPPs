#include <Bureaucrat.hpp>

int main()
{
    try 
	{
        Bureaucrat b;
		std::cout << YELLOW << b << RESET << std::endl;
		Bureaucrat a("Paco", 200);
    } 
	catch (const Bureaucrat::GradeTooHighException& e)
	{
        std::cerr << RED << e.what() << RESET << std::endl;
    }
	catch (const Bureaucrat::GradeTooLowException& e)
	{
        std::cerr << RED << e.what() << RESET << std::endl;
    }
	catch (const std::exception& e)
	{
        std::cerr << RED << "An unexpected error occurred: " << RESET << e.what() << std::endl;
    }
    return 0;
}
