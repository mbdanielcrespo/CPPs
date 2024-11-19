







#pragma once
#include <algorithm>
#include <iostream>
#include <ASpell.hpp>
#include <ATarget.hpp>
#include <string>
#include <map>

class ASpell;
class ATarget;

class Warlock
{
	private:
		std::string	_name;
		std::string	_title;
		std::map<std::string, ASpell*>	_SpellBook;

		Warlock();
		Warlock(const Warlock &cp);
		Warlock&operator=(const Warlock &cp);
	public:
		~Warlock();

		Warlock(const std::string& name, const std::string& title);

		const std::string getName(void) const;
		const std::string getTitle(void) const;

		void	setTitle(const std::string& title);
		void 	introduce() const ;

		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string spellName);
		void	launchSpell(std::string spellName, const ATarget& target);
};
