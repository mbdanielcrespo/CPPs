





#include <ASpell.hpp>

ASpell::ASpell() {}

ASpell::ASpell(const ASpell& cp) : _name(cp._name), _effects(cp._effects) {}

ASpell& ASpell::operator=(const ASpell& cp)
{
    if (this != &cp)
    {
        _name = cp.getName();
        _effects = cp.getEffects();
    }
    return (*this);
}

ASpell::ASpell(const std::string& name, const std::string& effects) : _name(name), _effects(effects) {}

ASpell::~ASpell() {}

const std::string ASpell::getName() const
{
    return (_name);
}

const std::string ASpell::getEffects() const
{
    return (_effects);
}

void	ASpell::launch(const ATarget& target) const
{
    target.getHitBySpell(*this);
}