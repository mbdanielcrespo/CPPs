/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:13:18 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:13:20 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();


		void announce(void);
	private:
		std::string	_name;
};
