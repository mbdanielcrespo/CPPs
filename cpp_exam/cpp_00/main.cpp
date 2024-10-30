/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:27:28 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/29 12:31:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Warlock.hpp>

int	main()
{
	{
		//Warlock bob;
		Warlock bob("Bob", "the magnificient");
		Warlock jim("Jim", "the magni");
		//bob = jim;
		//Warlock jack(jim);

	}
	std::cout << std::endl;
	{
	Warlock const richard("Richard", "Mistress of Magma");
	richard.introduce();
	std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

	Warlock* jack = new Warlock("Jack", "the Long");
	jack->introduce();
	jack->setTitle("the Mighty");
	jack->introduce();

	delete jack;

	return (0);
	}
}


//	c++ -Wall -Werror -Wextra -std=c++98 -I. *.cpp