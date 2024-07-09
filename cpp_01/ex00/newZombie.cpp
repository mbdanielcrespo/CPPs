#include <Zombie.h>

Zombie *newZombie(std::string name)
{
	Zombie *zom = new Zombie(name);
	std::cout << GREEN << "Zombie allocated successfully!" << RESET << std::endl; 
	return (zom);
}