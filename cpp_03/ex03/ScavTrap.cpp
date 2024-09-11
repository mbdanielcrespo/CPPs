#include <main.h>
//#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

ScavTrap::ScavTrap() : ClapTrap("UnNamed", 100, 50, 20)
{
	std::cout << GREEN << "ScavTrap Default constructor called!" << RESET << std::endl;
}

ScavTrap::ScavTrap(const std::string& newname) : ClapTrap(newname, 100, 50, 20)
{
	std::cout << GREEN << "ScavTrap attribute constructor called!" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cp) : ClapTrap(cp.getName(), 100, 50, 20)
{
	std::cout << GREEN << "ScavTrap Copy contructor called!" << RESET << std::endl;
	*this = cp;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &cp)
{
	std::cout << GREEN << "ScavTrap Copy assignment operator called!" << RESET << std::endl;
	if (this != &cp)
	{
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "ScavTrap " << getName() << " Default destructor called!" << RESET << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << YELLOW << "Scavtrap " << getName();
	if (getAttack() <= 0 || getEnergy() <= 0)
		std::cout << " is no able to attack!" << RESET <<  std::endl;
	else
		std::cout << " attacks " << target << " causing " << getAttack() << " points of damage!" << RESET << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << YELLOW << "ScavTrap " << getName() << " is now in Gate Keeper Mode!" << RESET << std::endl;
}
