#pragma once
#include <iostream>
#include <iomanip>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon(std::string type);
	~Weapon();

	std::string getType() const;
	void	setType(std::string type);
};



