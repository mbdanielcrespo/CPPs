#pragma once
#include <FragTrap.hpp>
#include <ScavTrap.hpp>
#include <main.h>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(void);
		DiamondTrap(const std::string& newname);
		DiamondTrap(const DiamondTrap& cp);
		virtual ~DiamondTrap();
			
		DiamondTrap& operator=(const DiamondTrap &cp);

		void whoAmI() const;
};