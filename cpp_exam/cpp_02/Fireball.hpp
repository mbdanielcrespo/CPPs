/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:38:00 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 22:38:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <ASpell.hpp>

class Fireball : public ASpell
{
	public:
		Fireball();
		~Fireball();
		ASpell*    clone(void) const;
};

