/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:45:36 by marvin            #+#    #+#             */
/*   Updated: 2024/10/17 19:45:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <IMateriaSource.hpp>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materias[4];
		static int _materia_count;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& cp);
		MateriaSource&operator=(const MateriaSource& cp);
		~MateriaSource();

		void learnMateria(AMateria* m);
		AMateria* createMateria(const std::string& type);
};

