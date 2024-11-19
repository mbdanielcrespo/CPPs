






#pragma once
#include <map>
#include <iostream>
#include <string>
#include <algorithm>
#include <ATarget.hpp>

class ATarget;

class TargetGenerator
{
	private:
		std::map <std::string, ATarget*> _targets;
		TargetGenerator(const TargetGenerator& cp);
		TargetGenerator&operator=(const TargetGenerator& cp);
	public:
		TargetGenerator();
		~TargetGenerator();

		void	learnTargetType(ATarget*);
		void	forgetTargetType(const std::string&);
		ATarget*	createTarget(const std::string&);
};
