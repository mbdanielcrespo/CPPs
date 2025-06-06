/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:43:55 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/14 14:43:55 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <Animal.hpp>
#include <Brain.hpp>

class Dog : public Animal
{
	private:
		Brain*		_brain;
	public:
		Dog();
		Dog(Dog& cp);
		Dog&operator=(const Dog& cp);
		virtual ~Dog();

		void		makeSound(void) const;
};

