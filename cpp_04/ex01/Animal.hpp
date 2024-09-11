#pragma once
#include <main.h>
#include <iostream>
#include <Brain.hpp>

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

		virtual void setBrain(Brain*) {};
    	virtual Brain* getBrain() const { return 0; };
};
