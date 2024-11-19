




#pragma once
#include <ATarget.hpp>

class BrickWall : public ATarget
{
	public:
		BrickWall();
		ATarget*	clone(void) const;
		~BrickWall();
};
