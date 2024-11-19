





#pragma once
#include <map>
#include <iostream>
#include <string>
#include <algorithm>
#include <ASpell.hpp>

class ASpell;

class SpellBook
{
	private:
		std::map <std::string, ASpell*> _SpellBook;
		SpellBook(const SpellBook& cp);
		SpellBook& operator=(const SpellBook& cp);
	public:
		SpellBook();
		~SpellBook();

		void	learnSpell(ASpell*);
		void	forgetSpell(const std::string&);
		ASpell*	createSpell(const std::string&);
};
