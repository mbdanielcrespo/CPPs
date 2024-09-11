#include <main.h>
#include <Ice.hpp>
#include <Cure.hpp>
#include <Character.hpp>

int Character::_materia_slots = 4;


Character::Character()
{
	std::cout << GREEN << "Character default constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; ++i)
        _materias[i] = NULL;  // Use NULL instead of nullptr
}

Character::Character(Character& cp)
{
	std::cout << GREEN << "Character copy constructor called" << RESET << std::endl;
	*this = cp;
}

Character&	Character::operator=(const Character cp)
{
	std::cout << GREEN << "Character assignment operator called" << RESET << std::endl;
	if (this != &cp)
	{
	}
	return (*this);
}

Character::~Character()
{
	std::cout << RED << "Character default destructor called" << RESET << std::endl;
}

Character::Character(std::string name)
{
	std::cout << GREEN << "Character attribute constructor called" << RESET << std::endl;
	this->_name = name;
	this->_materia_slots = 0;
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
	if (idx >= 0 && idx >= 3)
	{
		if (_materias[idx] != NULL)
			_materias[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{	
		if (_materias[idx] != NULL)
			_materias[idx]->use(target);
	}
}