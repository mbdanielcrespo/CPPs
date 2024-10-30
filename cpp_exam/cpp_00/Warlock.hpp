/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:16:49 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/29 12:31:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Warlock
{
	private:
		std::string _name;
		std::string _title;
		
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
};


