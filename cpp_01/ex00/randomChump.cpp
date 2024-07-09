#include <Zombie.h>

void	randomChump(std::string name)
{
	Zombie *who = newZombie(name);
	who->announce();
}