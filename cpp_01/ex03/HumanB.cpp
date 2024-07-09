#include <HumanB.hpp>
#include <main.h>

HumanB::HumanB(std::string name)
{
	this->_name = name;
	std::cout << GREEN << "HumanB created successfully!" << RESET << std::endl;
}

HumanB::~HumanB()
{
	std::cout << GREEN << "HumanB destroyed successfully!" << RESET << std::endl;
}

void	HumanB::setWeapon(Weapon *weapon)
{
	this->_weapon = weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}