#include <HumanA.hpp>
#include <main.h>

HumanA::HumanA(std::string name, Weapon *weapon)
{
	this->_name = name;
	this->_weapon = weapon;
	std::cout << GREEN << "HumanA created successfully!" << RESET << std::endl;
}

HumanA::~HumanA()
{
	std::cout << GREEN << "HumanA destroyed successfully!" << RESET << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}