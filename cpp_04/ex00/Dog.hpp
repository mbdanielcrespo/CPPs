#pragma once
#include <Animal.hpp>

class Dog : public Animal
{
	private:
		std::string	_type;
	public:
		Dog();
		Dog(Dog& cp);
		Dog&operator=(const Dog& cp);
		virtual ~Dog();

		void		makeSound(void) const;
		std::string	getType(void) const;
};

