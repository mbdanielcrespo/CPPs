#include <main.h>
#include <Zombie.hpp>

Zombie *newZombie(std::string name)
{
	Zombie *zom = new Zombie(name);
	std::cout << GREEN << "Zombie allocated successfully!" << RESET << std::endl; 
	return (zom);
}