#include <AAnimal.hpp>
#include <main.h>
#include <iostream>

AAnimal::AAnimal(void) : _type("unknown")
{
	std::cout << GREEN << "Animal default contructor called!" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal& cp) : _type(cp._type)
{
	std::cout << GREEN << "Animal copy contructor called!" << RESET << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& cp)
{
	std::cout << GREEN << "Animal assignment operator called!" << RESET << std::endl;
	if (this != &cp)
		this->_type = cp._type;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << RED << "Animal default destructor called!" << RESET << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << GREEN << "Animal parameter contructor called!" << RESET << std::endl;
}
