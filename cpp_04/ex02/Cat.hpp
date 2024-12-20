/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:06:07 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/14 13:06:07 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <AAnimal.hpp>
#include <Brain.hpp>

class Cat : public AAnimal
{
	private:
		Brain*		_brain;
	public:
		Cat();
		Cat(Cat& cp);
		Cat&operator=(const Cat& cp);
		virtual ~Cat();

		void		makeSound(void) const;
		const std::string& getType(void) const;
};

