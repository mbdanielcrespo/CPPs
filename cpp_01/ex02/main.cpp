#include <string>
#include <iostream>


int	main()
{
	std::string variable = "HI THIS IS BRAIN";
	std::string *stringPTR = &variable;
	std::string &stringREF = variable;

	std::cout << "String reference (&var):	" << &variable << std::endl;
	std::cout << "String ponter:			" << stringPTR << std::endl;
	std::cout << "String reference:		" << &stringREF << std::endl;

	std::cout << "String value:			" << variable << std::endl;
	std::cout << "String pointer reference:	" << &stringPTR << std::endl;
	std::cout << "String reference pointer:	" << &stringREF << std::endl;
}


