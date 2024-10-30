/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:46:07 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 12:46:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <ASpell.hpp>

class Fwoosh : public ASpell
{
public:
	Fwoosh();
	~Fwoosh();

	ASpell*	clone(void) const;
};
