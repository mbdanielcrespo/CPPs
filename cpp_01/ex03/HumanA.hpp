#pragma once
#include <iostream>
#include <iomanip>
#include <Weapon.hpp>

class HumanA
{
private:
	std::string	_name;
	Weapon *_weapon;
public:
	HumanA(std::string name, Weapon *weapon);
	~HumanA();

	void	attack(void);
};
