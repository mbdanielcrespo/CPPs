#pragma once
#include <Animal.hpp>
#include <Brain.hpp>

class Dog : public Animal
{
	private:
		Brain*	_brain;
	public:
		Dog();
		Dog(Dog& cp);
		Dog&operator=(const Dog& cp);
		virtual ~Dog();

		void		makeSound(void) const;
		std::string	getType(void) const;
};

