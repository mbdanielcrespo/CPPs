/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:52:58 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/14 12:52:58 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <Animal.hpp>

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat& cp);
		Cat&operator=(const Cat& cp);
		virtual ~Cat();

		void		makeSound(void) const;
};

