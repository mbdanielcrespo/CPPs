#include <Dog.hpp>

Dog::Dog(void) : AAnimal("Dog")
{
	std::cout << GREEN << "Dog default constructor called!" << RESET << std::endl;
}

Dog::Dog(Dog& cp) : AAnimal(cp._type)
{
	std::cout << GREEN << "Dog copy constructor called!" << RESET << std::endl;
}

Dog::~Dog(void)
{
	std::cout << RED << "Dog default destructor called!" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& cp)
{
	std::cout << GREEN << "Dog assignment operator called!" << RESET << std::endl;
	if (this != &cp)
		AAnimal::operator=(cp);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << YELLOW << "Wolffffff" << RESET << std::endl;
}

const std::string&	Dog::getType(void) const
{
	return (this->_type);
}