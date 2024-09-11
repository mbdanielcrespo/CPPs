#include <Cat.hpp>

Cat::Cat(void)
{
	std::cout << GREEN << "Cat default constructor called!" << RESET << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat& cp) : Animal()
{
	std::cout << GREEN << "Cat copy constructor called!" << RESET << std::endl;
	this->_type = cp.getType();
}

Cat::~Cat(void)
{
	std::cout << RED << "Cat default destructor called!" << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& cp)
{
	std::cout << GREEN << "Cat assignment operator called!" << RESET << std::endl;
	this->_type = cp._type; 
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << YELLOW << "Miauuuuu" << RESET << std::endl;
}

std::string	Cat::getType(void) const
{
	return (this->_type);
}