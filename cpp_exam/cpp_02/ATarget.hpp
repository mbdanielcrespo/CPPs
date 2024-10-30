/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:40:35 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 12:40:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ASpell.hpp>

class ASpell;

class ATarget
{
protected:
	std::string _type;
public:
	ATarget(std::string type);

	ATarget();
	ATarget(const ATarget &cp);
	ATarget&operator=(const ATarget &cp);
	virtual ~ATarget();

	std::string getType(void) const;

	void	getHitBySpell(const ASpell& spell) const;

	virtual ATarget* clone(void) const = 0;
};