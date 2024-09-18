#include <Serializer.hpp>
#include <Data.hpp>

Serializer::Serializer()
{
	std::cout << GREEN << "Default Serializer constructor called!" << RESET << std::endl;
}

Serializer::Serializer(const Serializer& cp)
{
	std::cout << GREEN << "Default Serializer copy constructor called!" << RESET << std::endl;
	*this = cp;
}

Serializer& Serializer::operator=(const Serializer& cp)
{
	std::cout << GREEN << "Default Serializer assignment operator called!" << RESET << std::endl;
	if (this != &cp)
	{
	}
	return *this;
}

Serializer::~Serializer()
{
	std::cout << RED << "Default Serializer desstructor called!" << RESET << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}