/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:44:56 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 22:44:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <ASpell.hpp>

class BrickWall  : public ATarget
{
public:
	BrickWall ();
	~BrickWall ();
	ATarget* clone(void) const;
};