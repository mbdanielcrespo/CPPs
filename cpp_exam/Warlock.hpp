/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:16:49 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/24 16:32:18 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Warlock
{
	private:
		const std::string _name;
		const std::string _title;
	public:
		Warlock();
		Warlock(const Warlock &cp);
		Warlock&operator=(const Warlock &cp);
		~Warlock();

		Warlock(const std::string name, const std::string type);
		void				introduce() const;

		const std::string&	getName(void);
		const std::string&	getTitle(void);
		void				setTitle(const std::string title);
};


