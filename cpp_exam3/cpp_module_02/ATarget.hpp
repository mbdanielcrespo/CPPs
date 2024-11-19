







#pragma once
#include <ASpell.hpp>
#include <iostream>
#include <string>

class ASpell;

class ATarget
{
	private:
		std::string _type;
	public:
		ATarget();
		ATarget(const ATarget& cp);
		ATarget&operator=(const ATarget& cp);
		virtual	~ATarget();

		ATarget(const std::string& type);

		const std::string getType() const;
		
		virtual ATarget*	clone(void) const = 0;

		void	getHitBySpell(const ASpell& spell) const;

};