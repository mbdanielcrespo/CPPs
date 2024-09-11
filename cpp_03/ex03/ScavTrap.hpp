#pragma once
#include <ClapTrap.hpp>
#include <main.h>

class ScavTrap : virtual public ClapTrap
{
	private:
	public:
		ScavTrap();
		ScavTrap(const std::string& newname);
		ScavTrap(const ScavTrap &cp);
		virtual ~ScavTrap();

		ScavTrap&operator=(const ScavTrap &cp);

		void	attack(const std::string& target);
		void	guardGate(void);
};

