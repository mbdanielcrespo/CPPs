/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:17:55 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/10 09:41:43 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
