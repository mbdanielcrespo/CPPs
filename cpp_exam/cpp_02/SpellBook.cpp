/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:55:05 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 22:55:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <SpellBook.hpp>
#include <ASpell.hpp>

SpellBook::SpellBook(const SpellBook& cp) {*this = cp}

SpellBook&  SpellBook::operator=(const SpellBook& cp);

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
	for (std::map<std::string, ASpell*>::iterator it = _SpellBook.begin(); it != _SpellBook.end(); it++)
		delete it->second;
	_SpellBook.clear()
}

void	SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
		_SpellBook[spell->getName()] = spell->clone();
}

void	SpellBook::forgetSpell(const std::string& spell_name)
{
	for (std::map<std::string, ASpell*>::iterator it = _SpellBook.begin(); it != _SpellBook.end(); it++)
	{
		if (it->first == spell_name)
		{
			delete it->second;
			_SpellBook.erase(it);
		}
	}
}

ASpell*	SpellBook::createSpell(const std::string& spell_name)
{
	ASpell* tmp = NULL;

	if (_SpellBook.find(spell_name) != _SpellBook.end())
		tmp = _SpellBook[spell_name];
	return (tmp);
}
