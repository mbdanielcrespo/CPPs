/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:44:47 by marvin            #+#    #+#             */
/*   Updated: 2024/10/17 19:44:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>
#include <Ice.hpp>
#include <Cure.hpp>
#include <Character.hpp>

Character::Character()
{
	std::cout << GREEN << "Character default constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; ++i)
		_materias[i] = NULL;  // Use NULL instead of NUL
}

Character::Character(const Character& cp)
{
	std::cout << GREEN << "Character copy constructor called" << RESET << std::endl;
	*this = cp;
}

Character&	Character::operator=(const Character cp)
{
	std::cout << GREEN << "Character assignment operator called" << RESET << std::endl;
	if (this != &cp)
	{
		_name = cp._name;
		for (int i = 0; i < 4; i++)
		{
			delete _materias[i];
			if (cp._materias[i])
				_materias[i] = cp._materias[i]->clone();
			else
				_materias[i] = NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	std::cout << RED << "Character default destructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		delete _materias[i];
}

Character::Character(const std::string& name) : _name(name)
{
	std::cout << GREEN << "Character attribute constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

const std::string& Character::getName() const
{
	return(this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_materias[i] == NULL)
		{
			_materias[i] = m;
			std::cout << YELLOW << "Materia " << m->getType() << " equiped successfully!" << RESET << std::endl;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx >= 3 && _materias[idx] != NULL)
		_materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	std::cout << CYAN << this->getName() << ": " << RESET;
	if (idx >= 0 && idx < 4 && _materias[idx])
			_materias[idx]->use(target);
}