#pragma once
#include <ClapTrap.hpp>
#include <main.h>

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap();
	public:
		ScavTrap(const std::string& newname);
		ScavTrap(const ScavTrap &cp);
		virtual ~ScavTrap();

		ScavTrap&operator=(const ScavTrap &cp);

		void	attack(const std::string& target);
		void	guardGate(void);
};

