/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:15:05 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 13:15:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fwoosh.hpp>

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}
Fwoosh::~Fwoosh() {}
ASpell*	Fwoosh::clone(void) const {return (new Fwoosh());}