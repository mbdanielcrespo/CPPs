/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:30:14 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:30:14 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <main.h>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_health;
		int			_energy;
		int			_attack;
	public:
		ClapTrap();
		ClapTrap(std::string name, int health, int energy, int attack);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &cp);
		ClapTrap&operator=(const ClapTrap &cp);
		~ClapTrap();

		virtual void	attack(const std::string& target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);
		virtual void	printStats(void);

		//const	std::string	&getName(void) const;
		//const	int			&getHealth(void) const;
		//const	int			&getEnergy(void) const;
		//const	int			&getAttack(void) const;
		//void 				setName(const std::string &name);
		//void 				setHealth(int health);
		//void 				setEnergy(int energy);
		//void 				setAttack(int attack);
};
