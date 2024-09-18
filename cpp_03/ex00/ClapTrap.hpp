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
	private:
		std::string	_name;
		int			_health;
		int			_energy;
		int			_attack;

	public:
		ClapTrap();
		ClapTrap(std::string name, int health, int energy, int attack);
		ClapTrap(const ClapTrap &cp);
		~ClapTrap();
		ClapTrap&operator=(const ClapTrap &cp);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	printStats(void);

		const	std::string	&getName(void) const;
		const	int			&getHealth(void) const;
		const	int			&getEnergy(void) const;
		const	int			&getAttack(void) const;
};
