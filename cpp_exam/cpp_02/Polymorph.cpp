/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:44:10 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 22:44:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Polymorph.hpp>

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {}
Polymorph::~Polymorph() {}
ASpell*    Polymorph::clone(void) const {return (new Polymorph())}