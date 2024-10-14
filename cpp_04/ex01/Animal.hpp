/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:05:13 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/14 13:05:13 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <main.h>
#include <iostream>
#include <Brain.hpp>

class Animal
{
	protected:
		std::string _type;
		Brain*		_brain;
	public:
		Animal();
		Animal(Animal& cp);
		Animal&operator=(const Animal& cp);
		virtual ~Animal();

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
    	Brain* 			getBrain() const;
};
