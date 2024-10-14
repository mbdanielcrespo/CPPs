#include <DiamondTrap.hpp>
#include <main.h>

DiamondTrap::DiamondTrap(void)
    : ClapTrap("DiamondTrap_clap_name", 100, 50, 30), ScavTrap(), FragTrap(), _name("DiamondTrap")
{
    setHealth(100);
    setEnergy(50); 
    setAttack(30); 
    std::cout << GREEN << "DiamondTrap " << this->_name << " default constructor called!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& newname)
    : ClapTrap(newname + "_clap_name", 100, 50, 30), ScavTrap(), FragTrap(), _name(newname)
{
    setHealth(100);
    setEnergy(50); 
    setAttack(30); 
    std::cout << GREEN << "DiamondTrap " << this->_name << " attribute constructor called!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& cp)
    : ClapTrap(cp), ScavTrap(cp), FragTrap(cp), _name(cp._name)
{
    std::cout << GREEN << "DiamondTrap copy constructor called!" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << RED << "DiamondTrap destructor called!" << RESET << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &cp)
{
    std::cout << GREEN << "DiamondTrap copy assignment operator called!" << RESET << std::endl;
    if (this != &cp)
    {
        ClapTrap::operator=(cp);
        this->_name = cp._name;
    }
    return *this;
}

void DiamondTrap::whoAmI(void) const
{
    std::cout << BLUE << "I am " << this->_name << " and my ClapTrap name is " << ClapTrap::getName() << "!" << RESET << std::endl;
}
