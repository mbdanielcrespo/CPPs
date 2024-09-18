/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:12:30 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:12:32 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.h>

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << GREEN << "Zombie created successfully!" << RESET << std::endl; 
}

Zombie::~Zombie()
{
	std::cout << GREEN << "Zombie destroyed successfully!" << RESET << std::endl; 
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
