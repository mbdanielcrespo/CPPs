h/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:42:28 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 22:42:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <ASpell.hpp>

class Polymorph : public ASpell
{
	public:
		Polymorph();
		~Polymorph();
		ASpell*    clone(void) const;
};
