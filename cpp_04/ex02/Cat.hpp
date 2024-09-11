#pragma once
#include <AAnimal.hpp>
#include <Brain.hpp>

class Cat : public AAnimal
{
	protected:

	public:
		Cat();
		Cat(Cat& cp);
		Cat&operator=(const Cat& cp);
		~Cat();

		void		makeSound(void) const;
		const std::string&	getType(void) const;

		void	setBrain(Brain* newBrain);
		Brain*	getBrain(void) const;
};

