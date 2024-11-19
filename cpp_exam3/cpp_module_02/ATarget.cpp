




#include <ATarget.hpp>

ATarget::ATarget() {}

ATarget::ATarget(const ATarget& cp) : _type(cp._type) {}

ATarget&    ATarget::operator=(const ATarget& cp)
{
    if (this != &cp)
    {
        _type = cp.getType();
    }
    return (*this);
}

ATarget::~ATarget() {}

ATarget::ATarget(const std::string& type) : _type(type) {}

const std::string ATarget::getType() const { return _type; }

void	ATarget::getHitBySpell(const ASpell& spell) const
{
    std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}