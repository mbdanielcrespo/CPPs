#include <Dog.hpp>

Dog::Dog(void)
{
	std::cout << GREEN << "Dog default constructor called!" << RESET << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog& cp) : Animal()
{
	std::cout << GREEN << "Dog copy constructor called!" << RESET << std::endl;
	this->_type = cp.getType();
}

Dog::~Dog(void)
{
	std::cout << RED << "Dog default destructor called!" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& cp)
{
	std::cout << GREEN << "Dog assignment operator called!" << RESET << std::endl;
	this->_type = cp._type; 
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << YELLOW << "Wolffffff" << RESET << std::endl;
}

std::string	Dog::getType(void) const
{
	return (this->_type);
}