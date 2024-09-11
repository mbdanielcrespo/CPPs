#include <Brain.hpp>

Brain::Brain(void)
{
	std::cout << GREEN << "Brain default constructor called!" << RESET << std::endl;
	int i = 0;
	while (i < 100)
		this->ideas[i++] = "crazy idea! ... ";	
}

Brain::Brain(Brain& cp)
{
	std::cout << GREEN << "Brain copy constructor called!" << RESET << std::endl;
	*this->ideas = *cp.ideas	;
}

Brain::~Brain(void)
{
	std::cout << RED << "Brain default destructor called!" << RESET << std::endl;
}

Brain& Brain::operator=(const Brain& cp)
{
	std::cout << GREEN << "Brain assignment operator called!" << RESET << std::endl;
	*this->ideas = *cp.ideas; 
	return (*this);
}

void	Brain::shareIdea(int index)
{
	if (index >= 100 || index < 0)
		std::cout << RED << "You're thinking out of bounds" << RESET << std::endl;
	else
		std::cout << MAGENTA << ideas[index] << RESET << std::endl;
}