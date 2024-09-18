/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:14:29 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:14:30 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>
#include <Zombie.hpp>

Zombie *newZombie(std::string name)
{
	Zombie *zom = new Zombie(name);
	std::cout << GREEN << "Zombie allocated successfully!" << RESET << std::endl; 
	return (zom);
}