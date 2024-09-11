#include <Cat.hpp>

Cat::Cat(void) : AAnimal("Cat")
{
	std::cout << GREEN << "Cat default constructor called!" << RESET << std::endl;
}

Cat::Cat(Cat& cp) : AAnimal(cp._type)
{
	std::cout << GREEN << "Cat copy constructor called!" << RESET << std::endl;
}

Cat::~Cat(void)
{
	std::cout << RED << "Cat default destructor called!" << RESET << std::endl;
	delete this->_brain;
}

Cat& Cat::operator=(const Cat& cp)
{
	std::cout << GREEN << "Cat assignment operator called!" << RESET << std::endl;
	if (this != &cp)
		AAnimal::operator=(cp);
	this->_type = cp._type; 
	return (*this);

}

void	Cat::makeSound(void) const
{
	std::cout << YELLOW << "Miauuuuu" << RESET << std::endl;
}

const std::string&	Cat::getType(void) const
{
	return (this->_type);
}

void	Cat::setBrain(Brain* newBrain)
{
	delete this->_brain;
	std::cout << YELLOW << this->_type << " brain is braining ... " << this->_brain << RESET << std::endl; 
	this->_brain = newBrain;
}

Brain*	Cat::getBrain(void) const
{
	return (this->_brain);
}