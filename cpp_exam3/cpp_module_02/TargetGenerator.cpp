




#include <TargetGenerator.hpp>

TargetGenerator::TargetGenerator() {}

TargetGenerator::TargetGenerator(const TargetGenerator& cp) : _targets(cp._targets) {}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& cp)
{
	if (this != &cp)
		_targets = cp._targets;
	return (*this);
}

TargetGenerator::~TargetGenerator()
{
	for (std::map <std::string, ATarget*>::iterator it = _targets.begin(); it != _targets.end(); it++)
	{
		delete it->second;
	}
	_targets.clear();
}

void	TargetGenerator::learnTargetType(ATarget* TargetType)
{
	if (TargetType)
	{
		if (_targets.find(TargetType->getType()) == _targets.end())
			_targets[TargetType->getType()] = TargetType->clone();
	}
}

void	TargetGenerator::forgetTargetType(const std::string& TargetTypeName)
{
	if (_targets.find(TargetTypeName) != _targets.end())
	{
		delete _targets[TargetTypeName];
		_targets.erase(_targets.find(TargetTypeName));
	}
}

ATarget* TargetGenerator::createTarget(const std::string& TargetTypeName)
{
	ATarget*	tmp = NULL;
	if (_targets.find(TargetTypeName) != _targets.end())
		tmp = _targets[TargetTypeName];
	return (tmp);

}