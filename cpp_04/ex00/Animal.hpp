#pragma once
#include <main.h>
#include <Brain.hpp>
#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(Animal& cp);
		Animal&operator=(const Animal& cp);
		virtual ~Animal();

		virtual std::string	getType(void) const;
		virtual void 		makeSound(void) const;
};
