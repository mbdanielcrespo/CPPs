#include <Weapon.hpp>
#include <main.h>

Weapon::Weapon(std::string type)
{
	this->_type = type;
	std::cout << GREEN << "Weapon created successfully!" << RESET << std::endl;
}

Weapon::~Weapon()
{
	std::cout << GREEN << "Weapon destroyes successfully!" << RESET << std::endl;
}

std::string	Weapon::getType() const
{
	return this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}