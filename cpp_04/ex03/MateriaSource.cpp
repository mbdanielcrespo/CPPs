#include <MateriaSource.hpp>
#include <AMateria.hpp>
#include <main.h>

int MateriaSource::_materia_count = 0;

MateriaSource::MateriaSource() : IMateriaSource()
{
	std::cout << GREEN << "MateriaSource default constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; ++i)
        _materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource& cp)
{
	std::cout << GREEN << "MateriaSource copy constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; ++i)
	{
        if (cp._materias[i] != NULL)
            _materias[i] = cp._materias[i]->clone();
        else
            _materias[i] = NULL;
    }
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& cp)
{
	std::cout << GREEN << "MateriaSource assignment operator called" << RESET << std::endl;
    if (this != &cp)
	{
        for (int i = 0; i < 4; ++i)
		{
            delete _materias[i];
            if (cp._materias[i] != NULL)
                _materias[i] = cp._materias[i]->clone();
            else
                _materias[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << RED << "MateriaSource default destructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		delete _materias[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m == NULL) return;
	
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == NULL)
		{
			_materias[i] = m;
			std::cout << YELLOW << "Materia learned: " << m->getType() << RESET << std::endl;
			return;
		}
	}
	std::cout << YELLOW << "MateriaSource is full, cannot learn more Materia." << RESET << std::endl;
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; ++i)
	{
        if (_materias[i] != NULL && _materias[i]->getType() == type) 
            return _materias[i]->clone();
    }
    std::cout << YELLOW << "Materia of type " << type << " not found." << RESET << std::endl;
    return NULL;
}