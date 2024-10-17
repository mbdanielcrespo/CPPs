/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:31:38 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:31:38 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <ClapTrap.hpp>
#include <main.h>

class ScavTrap : public virtual ClapTrap
{
	private:
	public:
		ScavTrap();
		ScavTrap(const std::string& newname);
		ScavTrap(const ScavTrap &cp);
		virtual ~ScavTrap();

		ScavTrap&operator=(const ScavTrap &cp);

		void	guardGate(void);
};
