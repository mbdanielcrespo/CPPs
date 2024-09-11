#include <ClapTrap.hpp>
#include <main.h>

int	main(void)
{
	ClapTrap CT1("Daniel", 50, 4, 10);
	ClapTrap CT2(CT1);

	CT2.attack("Pakito");
	CT2.takeDamage(27);
	CT2.beRepaired(21);
	CT2.printStats();
}