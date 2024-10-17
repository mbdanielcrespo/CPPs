/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:44:53 by marvin            #+#    #+#             */
/*   Updated: 2024/10/17 19:44:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <ICharacter.hpp>
#include <AMateria.hpp>


class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _materias[4];
	public:
		Character(void);
		Character(const std::string& name);
		Character(const Character& cp);
		Character&operator=(const Character cp);
		virtual ~Character();

		const std::string& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target) ;
};
