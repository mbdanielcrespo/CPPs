/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:43:40 by marvin            #+#    #+#             */
/*   Updated: 2024/10/17 19:43:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>
#include <AMateria.hpp>
#include <Ice.hpp>
#include <Cure.hpp>
#include <Character.hpp>
#include <MateriaSource.hpp>

int	main(void)
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("Me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("Bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	
	/*
	MateriaSource src;
	src.learnMateria(new Ice());
	src.learnMateria(new Cure());

	AMateria* ice = src.createMateria("ice");
    AMateria* cure = src.createMateria("cure");

	Character npc1("npc1");
	npc1.equip(ice);
	npc1.equip(cure);

	Character npc2("npc2");
	npc2.use(0, npc1);
	npc2.use(1, npc2);

	npc1.unequip(0);
	npc1.unequip(0);
	npc1.use(0, npc2);
	*/
	return (0);
}