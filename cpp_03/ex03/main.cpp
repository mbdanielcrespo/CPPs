#include <DiamondTrap.hpp>
#include <iostream>
#include <cmath>
#include <main.h>

int	main(void)
{
	DiamondTrap DT1;
	DiamondTrap DT2("Pakito");

	DT2.attack("Bully");
	DT2.takeDamage(27);
	DT2.beRepaired(21);
	std::cout << std::endl;
	DT2.printStats();
	std::cout << std::endl;
	DT2.highFiveGuys();
	DT2.guardGate();
	DT2.whoAmI();
}