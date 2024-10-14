/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:12:23 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/09 15:38:36 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <main.h>

void	randomChump(std::string name)
{
	Zombie *who = newZombie(name);
	who->announce();
	delete who;
}