#pragma once
#include <IMateriaSource.hpp>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materias[4];
		static int _materia_count;
	public:
		MateriaSource();
		MateriaSource(MateriaSource& cp);
		MateriaSource&operator=(const MateriaSource& cp);
		~MateriaSource();

		void learnMateria(AMateria* m);
		AMateria* createMateria(const std::string& type);
};

