/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 00:19:28 by marvin            #+#    #+#             */
/*   Updated: 2024/10/30 00:19:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <TargetGenerator.hpp>

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {}

TargetGenerator::TargetGenerator(const TargetGenerator& cp) {*this = cp }
TargetGenerator& TargetGenerator::operator=(const TargetGenerator& cp) { if (this != &cp) {_targets = cp._targets;} return *this; }

void		TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
		_target[target->getType()] = target;
}

void		TargetGenerator::forgetTargetType(std::string const & target_name)
{
	if (_targets.find(target_name) != _targets.end())
		_target.erase(_targets.find(target_name));
}

ATarget*	TargetGenerator::createTarget(std::string const & target_name)
{
	ATarget* tmp = NULL;
	if (_targets.find(target_name) != _targets.end())
		tmp = _target[target_name];
	return (tmp);
}