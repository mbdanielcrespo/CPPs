/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:35:23 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 12:35:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ATarget.hpp>

class ATarget;

class ASpell
{
protected:
	std::string _name;
	std::string _effects;
public:
	ASpell(std::string name, std::string effects);
	ASpell();
	ASpell(const ASpell &cp);
	ASpell&operator=(const ASpell &cp);
	virtual ~ASpell();

	std::string getName(void) const;
	std::string getEffects(void) const;

	void	launch(const ATarget& target) const;
	virtual ASpell* clone(void) const = 0;
};
