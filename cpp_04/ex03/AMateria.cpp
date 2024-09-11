#include <AMateria.hpp>
#include <main.h>


AMateria::AMateria(void) : _type("unknown")
{
	std::cout << GREEN << "AMateria default constructor called!" << RESET << std::endl;
}

AMateria::AMateria(const AMateria& cp) : _type(cp._type)
{
	std::cout << GREEN << "AMateria copy constructor called!" << RESET << std::endl;
}

AMateria& AMateria::operator=(const AMateria& cp)
{
	std::cout << GREEN << "AMateria assignment operator called!" << RESET << std::endl;
	if (this != &cp)
		this->_type = cp._type;
	return (*this);
}

AMateria::~AMateria()	
{
	std::cout << GREEN << "AMateria destructor called!" << RESET << std::endl;
}

AMateria::AMateria(const std::string type) : _type(type)
{
	std::cout << YELLOW << "AMateria type has been set to: " << type << "!" << RESET << std::endl;
}

const std::string& AMateria::getType() const
{
	return _type;
}

