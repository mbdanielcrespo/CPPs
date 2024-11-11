/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:16:17 by danalmei          #+#    #+#             */
/*   Updated: 2024/11/11 17:44:07 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock() {}
Warlock::Warlock(const Warlock& cp) : _title(cp._title) {}
Warlock& Warlock::operator=(const Warlock& cp)
{
	if (this != &cp)
		_title = cp._title;
	return (*this);	
}

Warlock::Warlock(const std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

const std::string&	Warlock::getName() const
{
	return _name;
}

const std::string&	Warlock::getTitle() const
{
	return _title;	
}

void	Warlock::setTitle(const std::string& title)
{
	_title = title;
}

void	Warlock::introduce() const
{
	std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}