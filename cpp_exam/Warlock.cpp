/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:20:18 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/24 16:33:12 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Warlock.hpp>

//std::string _name;
//std::string _title;
		
Warlock::Warlock() {}

Warlock::Warlock(const Warlock &cp) {}

Warlock&Warlock::operator=(const Warlock &cp)
{
	std::cout << "Warlock assignment op called!" << std::endl;
	if (this != &cp)
	{
		this._name = cp._name;
		this._type = cp._type;
	}
	return (*this);
}

Warlock::~Warlock()
{
	std::cout << "Warlock def destructor called!" << std::endl;
}

Warlock::Warlock(const std::string name, const std::string type)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

const std::string&	Warlock::getName(void)
{
	return this->_name;
}

const std::string&	Warlock::getTitle(void)
{
	return this->_title;
}

void				Warlock::setTitle(const std::string title)
{
	this->_title = title;
}