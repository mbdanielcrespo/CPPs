#include <main.h>
#include <AMateria.hpp>
#include <Ice.hpp>
#include <Cure.hpp>
#include <Character.hpp>
#include <MateriaSource.hpp>

/*
Pure abstract classes are called interfaces**
*/

int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete src;
	delete me;
	delete bob;

	return (0);
}