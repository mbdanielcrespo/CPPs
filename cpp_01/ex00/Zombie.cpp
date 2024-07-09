#include <Zombie.h>

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << GREEN << "Zombie created successfully!" << RESET << std::endl; 
}

Zombie::~Zombie()
{
	std::cout << GREEN << "Zombie destroyed successfully!" << RESET << std::endl; 
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
