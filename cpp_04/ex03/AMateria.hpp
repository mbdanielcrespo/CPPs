#pragma once
#include <ICharacter.hpp>
#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria(void);
		AMateria(const AMateria& cp);
		AMateria&operator=(const AMateria& cp);
		virtual ~AMateria();

		AMateria(const std::string type);

		const std::string& getType() const;
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};
