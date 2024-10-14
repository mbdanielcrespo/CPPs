/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:53:05 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/14 12:53:05 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

int	main(void)
{
	Animal* ani = new Animal;
	Animal* cat = new Cat;
	WrongAnimal* wani = new WrongCat;
	Animal* dog = new Dog;

	std::cout << YELLOW << "animal is type: " << ani->getType() << RESET << std::endl;
	std::cout << YELLOW << "cat is type: " << cat->getType() << RESET << std::endl;
	std::cout << YELLOW << "dog is type: " << dog->getType() << RESET << std::endl;
	std::cout << YELLOW << "wcat is type: " << wani->getType() << RESET << std::endl;
	cat->makeSound();
	dog->makeSound();
	wani->makeSound();


	delete ani;
	delete cat;
	delete dog;
	delete wani;

	return (0);
}

