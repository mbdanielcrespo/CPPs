/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:46:15 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 22:46:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>

class SpellBook
{
	private:
		SpellBook(const SpellBook& cp);
		SpellBook&operator=(const SpellBook& cp);
		std::map <std::string, ASpell*> _SpellBook;
	public:
		SpellBook();
		~SpellBook();
		void	learnSpell(ASpell*);
		void	forgetSpell(const std::string&);
		ASpell*	createSpell(const std::string&);
};
