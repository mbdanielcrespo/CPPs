#pragma once
#include <ICharacter.hpp>
#include <AMateria.hpp>


class Character : public ICharacter
{
	protected:
		std::string _name;
		AMateria* _materias[4];
		static int _materia_slots;
	public:
		Character(void);
		Character(Character& cp);
		Character&operator=(const Character cp);
		~Character(void);

		Character(std::string name);
		const std::string& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target) ;
};
