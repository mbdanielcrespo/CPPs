#include <DiamondTrap.hpp>
#include <main.h>

DiamondTrap::DiamondTrap(void) :  ScavTrap(), FragTrap(), _name("DiamondTrap")
{
    std::cout << GREEN << "DiamondTrap " << this->_name << " default constructor called!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& newname)
    :   ClapTrap(newname + "_clap_name"),
        ScavTrap(newname), FragTrap(newname)
{
    this->_name = newname;
    this->ClapTrap::_name = newname + "_clap_name";
    this->_health = FragTrap::_health;
    this->_energy = ScavTrap::_energy;
    this->_attack = FragTrap::_attack;
    std::cout << GREEN << "DiamondTrap " << this->_name << " attribute constructor called!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& cp) : ClapTrap(cp), ScavTrap(cp), FragTrap(cp)
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
    std::cout << GREEN << "DiamondTrap copy assignment operator called!" << RESET << std::endl;
    this->_name = cp._name;
    this->_health = cp._health;
    this->_energy = cp._energy;
    this->_attack = cp._attack;
    return *this;
}

void DiamondTrap::whoAmI(void) const
{
    std::cout << BLUE << "I am " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << "!" << RESET << std::endl;
}
