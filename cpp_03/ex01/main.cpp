#
#include <ScavTrap.hpp>
#include <main.h>
#include <iostream>

int	main(void)
{
	//ScavTrap ST1;
	ScavTrap ST2("Pakito");

	ST2.attack("Bully");
	ST2.takeDamage(27);
	ST2.beRepaired(21);
	ST2.printStats();
	ST2.guardGate();
}