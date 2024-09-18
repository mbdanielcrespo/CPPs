/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:13:56 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:13:57 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>
#include <Zombie.hpp>

Zombie*    zombieHorde( int N, std::string name );

int	main()
{
	Zombie *zombies = zombieHorde(10, "Paco");
	delete []zombies;
}