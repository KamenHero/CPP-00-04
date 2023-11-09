/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:53:01 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/06 16:33:21 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Structing.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string Name;
		AMateria *materia[4];
		Utils head;
	public:
		Character();
		Character(const Character &b);
		Character(std::string _name);
		~Character();
		Character &operator=(const Character &);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
