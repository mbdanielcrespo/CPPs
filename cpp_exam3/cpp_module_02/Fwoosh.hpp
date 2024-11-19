






#pragma once
#include <ASpell.hpp>

class Fwoosh : public ASpell
{
	public:
		Fwoosh();
		ASpell*	clone(void) const;
		~Fwoosh();
};
