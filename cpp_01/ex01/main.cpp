#include <main.h>
#include <Zombie.hpp>

Zombie*    zombieHorde( int N, std::string name );

int	main()
{
	Zombie *zombies = zombieHorde(10, "Paco");
	delete []zombies;
}