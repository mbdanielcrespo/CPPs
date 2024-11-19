





#include <Warlock.hpp>

Warlock::Warlock() {}

Warlock::Warlock(const Warlock &cp) : _name(cp._name), _title(cp._title) {}

Warlock&	Warlock::operator=(const Warlock &cp)
{
	if (this != &cp)
	{
		_name = cp.getName();
		_title = cp.getTitle();
	}
	return (*this);
}

Warlock::~Warlock()
{
	std::cout << this->getName() << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const std::string& name, const std::string& title) : _name(name), _title(title)
{
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

const std::string Warlock::getName(void) const { return _name; }

const std::string Warlock::getTitle(void) const {  return _title; }

void	Warlock::setTitle(const std::string& title) { this->_title = title; }

void	Warlock::introduce() const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell) 
{
	if (spell)
	{
		if (_SpellBook.find(spell->getName()) == _SpellBook.end())
			_SpellBook[spell->getName()] = spell->clone();
	}
}

void	Warlock::forgetSpell(std::string spellName) 
{
	if (_SpellBook.find(spellName) != _SpellBook.end())
	{
		delete _SpellBook[spellName];
		_SpellBook.erase(_SpellBook.find(spellName));
	}
}

void	Warlock::launchSpell(std::string spellName, const ATarget& target) 
{
	if (_SpellBook.find(spellName) != _SpellBook.end())
	{
		_SpellBook[spellName]->launch(target);
	}
}