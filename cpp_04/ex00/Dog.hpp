/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:45:55 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/14 12:45:55 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <Animal.hpp>

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog& cp);
		Dog&operator=(const Dog& cp);
		virtual ~Dog();

		void		makeSound(void) const;
};

