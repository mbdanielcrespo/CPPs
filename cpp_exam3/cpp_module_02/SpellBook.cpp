



		std::map <std::string, *ASpell> _SpellBook;

SpellBook::SpellBook() {}
SpellBook::SpellBook(const SpellBook& cp) : _SpellBook(cp._SpellBook) {}

SpellBook& SpellBook::operator=(const SpellBook& cp)
{
	if (this != &cp)
		_SpellBook = cp._SpellBook;
	return (*this);
}

~SpellBook() {}

void	SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
	{
		if (_SpellBook.find(spell->getName()) == _SpellBook.end())
			_SpellBook[spell->getName()] = spell->clone();
	}
}

void	SpellBook::forgetSpell(const std::string& spellName)
{
	if (_SpellBook.find(spellName) != _SpellBook.end())
	{
		delete _SpellBook[spellName];
		_SpellBook.erase(_SpellBook.find(spellName));
	}
}

ASpell* SpellBook::createSpell(const std::string& spellName)
{

}
	