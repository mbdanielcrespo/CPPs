#pragma once
#include <Animal.hpp>

class Cat : public Animal
{
	private:
		std::string	_type;
	public:
		Cat();
		Cat(Cat& cp);
		Cat&operator=(const Cat& cp);
		virtual ~Cat();

		void		makeSound(void) const;
		std::string	getType(void) const;
};

