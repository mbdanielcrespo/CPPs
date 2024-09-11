#pragma once
#include <Animal.hpp>
#include <Brain.hpp>

class Cat : public Animal
{
	private:
		Brain*	_brain;
	public:
		Cat();
		Cat(Cat& cp);
		Cat&operator=(const Cat& cp);
		virtual ~Cat();

		void		makeSound(void) const;
		std::string	getType(void) const;

		void	setBrain(Brain* newBrain);
		Brain*	getBrain(void) const;


};

