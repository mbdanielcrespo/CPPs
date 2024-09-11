#pragma once
#include <main.h>
#include <Brain.hpp>

class AAnimal
{
	protected:
		std::string _type;
		Brain*	_brain;
	public:
		AAnimal(void);
		AAnimal(const AAnimal& cp);
		AAnimal&operator=(const AAnimal& cp);
		virtual ~AAnimal();

		AAnimal(std::string type);

		virtual const std::string&	getType(void) const = 0;
		virtual void makeSound(void) const = 0;
		virtual void setBrain(Brain*) {};
		virtual Brain* getBrain() const { return 0; };
};
