/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:13:18 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/09 15:34:01 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie(std::string name);
		~Zombie();

		void announce(void);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

