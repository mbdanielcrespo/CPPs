#pragma once
#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <main.h>

class FragTrap : virtual public ClapTrap
{
	private:
	public:
		FragTrap();
		FragTrap(const std::string& newname);
		FragTrap(const FragTrap &cp);
		virtual ~FragTrap();

		FragTrap&operator=(const FragTrap &cp);

		void	attack(const std::string& target);
		void	guardGate(void);
		void	highFiveGuys(void);
};
