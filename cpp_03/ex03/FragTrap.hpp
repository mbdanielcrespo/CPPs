/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:32:02 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:32:02 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <main.h>

class FragTrap : public virtual ClapTrap
{
	private:
	public:
		FragTrap();
		FragTrap(const std::string& newname);
		FragTrap(const FragTrap &cp);
		virtual ~FragTrap();

		FragTrap&operator=(const FragTrap &cp);

		void	highFiveGuys(void);
};
