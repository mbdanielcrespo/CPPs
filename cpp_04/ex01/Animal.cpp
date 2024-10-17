#include <Animal.hpp>

Animal::Animal(void)
{
	std::cout << GREEN << "Animal default contructor called!" << RESET << std::endl;
	this->_type = "Animal";
}

Animal::Animal(Animal& cp) : _type(cp._type)
{
	std::cout << GREEN << "Animal copy contructor called!" << RESET << std::endl;
}

Animal& Animal::operator=(const Animal& cp)
{
    std::cout << YELLOW << "Animal assignment operator called!" << RESET << std::endl;
    if (this != &cp)
        this->_type = cp._type;
    return *this;
}

Animal::~Animal(void)
{
	std::cout << RED << "Animal default destructor called!" << RESET << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Generic animal sound..." << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}
