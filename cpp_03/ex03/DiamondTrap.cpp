#include <DiamondTrap.hpp>
#include <main.h>

DiamondTrap::DiamondTrap(void) : ClapTrap("DiamondTrap_clap_name", 100, 50, 30)
{
	this->_name = "DiamondTrap_clap_name";
	std::cout << GREEN << "DiamondTrap " << this->_name << " default constructor called!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& newname) : ClapTrap(newname + "_clap_name", 100, 50, 30)
{
	std::cout << GREEN << "DiamondTrap attribute constructor called!" << RESET << std::endl;
	this->_name = newname + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap& cp) :  ClapTrap(cp), ScavTrap(cp), FragTrap(cp), _name(cp._name)
{
	std::cout << GREEN << "DiamondTrap copy constructor called!" << RESET << std::endl;
	*this = cp;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << RED << "DiamondTrap destructor called!" << RESET << std::endl;
}
			
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &cp)
{
	if (this != &cp)
	{
	}
	return (*this);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << BLUE << "I am " << this->_name << "!" << RESET << std::endl;
}