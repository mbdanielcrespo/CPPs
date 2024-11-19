




#pragma once
#include <ATarget.hpp>

class Dummy : public ATarget
{
	public:
		Dummy();
		ATarget*	clone(void) const;
		~Dummy();
};
