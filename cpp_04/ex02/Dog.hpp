#pragma once
#include <AAnimal.hpp>
#include <Brain.hpp>

class Dog : public AAnimal
{
	protected:
	
	public:
		Dog();
		Dog(Dog& cp);
		Dog&operator=(const Dog& cp);
		~Dog();

		void		makeSound(void) const;
		const std::string&	getType(void) const;
};

