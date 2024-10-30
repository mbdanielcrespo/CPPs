/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:39:58 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 22:39:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fireball.hpp>

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {}
Fireball::~Fireball() {}
ASpell*    Fireball::clone(void) const {return (new Fireball())}