/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:20:18 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/29 13:50:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Warlock.hpp>

//std::string _name;
//std::string _title;
		
Warlock::Warlock() {}

Warlock::Warlock(const Warlock &cp)
{
	*this = cp;
}

Warlock& Warlock::operator=(const Warlock &cp)
{
	std::cout << "Warlock assignment op called!" << std::endl;
	if (this != &cp)
	{
		this->_name = cp._name;
		this->_title = cp._title;
	}
	return (*this);
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const std::string name, const std::string title)
{
	_name = name;
	_title = title;
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

const std::string&	Warlock::getName(void) const
{
	return _name;
}

const std::string&	Warlock::getTitle(void) const
{
	return _title;
}

void				Warlock::setTitle(const std::string& title)
{
	_title = title;
}

void	Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell)
{
	if (spell)
	{
		if (_SpellBook.find(spell->getName()) == _SpellBook.end())
			_SpellBook[spell->getName()] = spell->clone();
	}
}

void	Warlock::forgetSpell(std::string SpellName)
{
	if (_SpellBook.find(SpellName) != _SpellBook.end())
	{
		delete _SpellBook[SpellName];
		_SpellBook.erase(_SpellBook.find(SpellName));
	}
}
void	Warlock::launchSpell(std::string SpellName, const ATarget& target)
{
	if (_SpellBook.find(SpellName) != _SpellBook.end())
		_SpellBook[SpellName]->launch(target);
}
