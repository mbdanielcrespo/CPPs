/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:16:49 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/30 00:10:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <SpellBook.hpp>
#include <iostream>
#include <ASpell.hpp>
#include <ATarget.hpp>
#include <map>

class Warlock
{
	private:
		std::string		_name;
		std::string		_title;
		SpellBook		_SpellBook;
		
		Warlock();
		Warlock(const Warlock &cp);
		Warlock&operator=(const Warlock &cp);
	public:
		Warlock(const std::string name, const std::string type);
		~Warlock();

		const std::string&	getName(void) const;
		const std::string&	getTitle(void) const;
		
		void				setTitle(const std::string& title);
		void				introduce() const;

		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string SpellName);
		void	launchSpell(std::string SpellName, const ATarget& target);
};


