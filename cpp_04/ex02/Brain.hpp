#pragma once
#include <main.h>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(Brain& cp);
		Brain&operator=(const Brain& cp);
		virtual ~Brain();

		void	shareIdea(int index);
};

