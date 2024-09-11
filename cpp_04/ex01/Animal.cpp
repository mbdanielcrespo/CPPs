#include <Animal.hpp>

Animal::Animal(void)
{
	std::cout << GREEN << "Animal default contructor called!" << RESET << std::endl;
	this->_type = "animal";
}

Animal::Animal(Animal& cp)
{
	std::cout << GREEN << "Animal copy contructor called!" << RESET << std::endl;
	*this = cp;
}

Animal&	Animal::operator=(const Animal& cp)
{
	std::cout << GREEN << "Animal assignment operator called!" << RESET << std::endl;
	if (this != &cp)
	{
	}
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << RED << "Animal default destructor called!" << RESET << std::endl;
}

std::string		Animal::getType() const
{
	return (this->_type);
}

void Animal::makeSound() const
{
	std::cout << YELLOW << "... generic animal sound ...\n" << RESET << std::endl;
}