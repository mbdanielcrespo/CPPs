/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:08:03 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 13:08:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ASpell.hpp>
#include <ATarget.hpp>

//	std::string _type;

ATarget::ATarget(std::string type) : _type(type) {}
ATarget::ATarget() {}
ATarget::~ATarget() {}

ATarget::ATarget(const ATarget &cp)
{
	*this = cp;
}

ATarget&	ATarget::operator=(const ATarget &cp)
{
	if (this != &cp)
		this->_type = cp.getType();
	return *this;
}

std::string	ATarget::getType(void) const
{
	return _type;
}

void	ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
