#include <Bureaucrat.hpp>
#include <Intern.hpp>

int main()
{
    Intern someRandomIntern;

    AForm* form1 = someRandomIntern.makeForm("robotomy request", "Bender");
    if (form1) {
        // Use the form as needed, e.g., sign and execute it
        delete form1;
    }

    AForm* form2 = someRandomIntern.makeForm("unknown form", "Target");
    if (form2) {
        // This should not be reached if the form name is unknown
        delete form2;
    }

    return 0;
}

