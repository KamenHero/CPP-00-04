/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:28:53 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/06 16:55:46 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
	Name = "Character";
	// for (int i = 0; i < 4; i++)
	// {
	// 	materia[i] = NULL;
	// }
	// std::cout << "Character Constructor called" << std::endl;
}

Character::Character(std::string _name)
{
	Name = _name;
	for (int i = 0; i < 4; i++)
	{
		materia[i] = NULL;
	}
	// std::cout << "Character Constructor called" << std::endl;
}

Character::~Character()
{
	head.freeNode();
	// std::cout << "Character destructor called" << std::endl;
}

Character &Character::operator=(const Character &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
	{
		Name = b.Name;
		for (int i = 0; i < 4; i++)
		{
			if (materia[i])
			{
				materia[i] = (b.materia[i])->clone();
				head.addBack(materia[i]);
			}
			else
				materia[i] = NULL;
		}
	}
	return *this;
}

Character::Character(const Character &b)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &b)
	{
		Name = b.Name;
		for (int i = 0; i < 4; i++)
		{
			if (materia[i])
			{
				materia[i] = (b.materia[i])->clone();
				head.addBack(materia[i]);
			}
			else
				materia[i] = NULL;
		}
	}
}

std::string const & Character::getName()const
{
	return Name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (!materia[i])
		{
			materia[i] = m;
			head.addBack(m);
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && materia[idx])
	{
		materia[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && materia[idx])
	{
		materia[idx]->use(target);
	}
}
