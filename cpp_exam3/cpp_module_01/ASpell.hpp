





#pragma once
#include <ATarget.hpp>
#include <iostream>
#include <string>

class ATarget;

class ASpell
{
	private:
		std::string	_name;
		std::string	_effects;
	public:
		ASpell();
		ASpell(const ASpell& cp);
		ASpell&	operator=(const ASpell& cp);
		virtual ~ASpell();

		ASpell(const std::string& name, const std::string& effects);

		const std::string getName() const;
		const std::string getEffects() const;

		virtual ASpell*	clone(void) const = 0;

		void	launch(const ATarget& target) const;
};
