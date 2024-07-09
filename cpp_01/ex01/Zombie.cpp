#include <main.h>
#include <Zombie.hpp>

Zombie::Zombie()
{
	std::cout << GREEN << "Nameless zombie created successfully!" << RESET << std::endl; 
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << GREEN << "Zombie created successfully!" << RESET << std::endl; 
}

Zombie::~Zombie()
{
	std::cout << GREEN << "Zombie destroyed successfully!" << RESET << std::endl; 
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
	std::cout << "Zombie was named: " << this->_name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
