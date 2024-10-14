/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:12:14 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/09 15:32:36 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <main.h>

Zombie *newZombie(std::string name)
{
	Zombie *zom = new Zombie(name);
	std::cout << GREEN << "Zombie allocated successfully!" << RESET << std::endl; 
	return (zom);
}