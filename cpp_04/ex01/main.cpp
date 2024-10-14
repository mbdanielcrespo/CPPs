/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:37:20 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/14 15:37:20 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int	main(void)
{
	{
		Animal* ani = new Animal;
		Animal* cat = new Cat;
		Animal* dog = new Dog;

		std::cout << YELLOW << "animal is type: " << ani->getType() << RESET << std::endl;
		std::cout << YELLOW << "cat is type: " << cat->getType() << RESET << std::endl;
		std::cout << YELLOW << "dog is type: " << dog->getType() << RESET << std::endl;
		cat->makeSound();
		dog->makeSound();

		delete ani;
		delete dog;
		delete cat;
	}
	std::cout << std::endl;
	
	std::cout << YELLOW << "Testing Dog deep copy with copy constructor" << RESET << std::endl;
    Dog basicDog;
    {
        Dog tmpDog = basicDog;
    }
    std::cout << YELLOW << "Testing deep copy, basicDog should still be valid" << RESET << std::endl;
    basicDog.makeSound();
    std::cout << YELLOW << "Testing Dog deep copy with assignment operator" << RESET << std::endl;
    Dog anotherDog;
    anotherDog = basicDog;
    anotherDog.makeSound();

	

	return (0);
}
