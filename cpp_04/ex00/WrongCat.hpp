/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   	.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:52:58 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/14 12:52:58 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat& cp);
		WrongCat&operator=(const WrongCat& cp);
		virtual ~WrongCat();

		void		makeSound(void) const;
};

