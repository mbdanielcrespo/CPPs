/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:59:41 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 12:59:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ASpell.hpp>
#include <ATarget.hpp>

//	std::string _name;
//	std::string _effects;

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {}
ASpell::ASpell() {}

ASpell::ASpell(const ASpell &cp) 
{
	*this = cp;
}

ASpell&	ASpell::operator=(const ASpell &cp)
{
	if (this != &cp)
	{
		this->_name = cp.getName();
		this->_effects = cp.getEffects();
	}
	return *this;
}

ASpell::~ASpell() {}

std::string ASpell::getName(void) const {return _name;}

std::string ASpell::getEffects(void) const {return _effects;}

void	ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}
