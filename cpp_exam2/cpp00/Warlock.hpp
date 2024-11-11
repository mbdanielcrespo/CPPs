/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:09:03 by danalmei          #+#    #+#             */
/*   Updated: 2024/11/11 17:50:32 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Warlock
{
	private:
		std::string _name;
		std::string _title;
		Warlock();
		Warlock(const Warlock& cp);
		Warlock&operator=(const Warlock& cp);
	public:
		Warlock(const std::string name, const std::string title);
		~Warlock();

		const	std::string& getName(void) const;
		const	std::string& getTitle(void) const;
		void	setTitle(const std::string& title);
		
		void	introduce() const;
};