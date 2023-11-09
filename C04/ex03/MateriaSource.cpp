/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:14:28 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/06 16:56:10 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		materia[i] = NULL;
	}
	// std::cout << "MateriaSource Constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	head.freeNode();
	// std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
	{
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

MateriaSource::MateriaSource(const MateriaSource &b)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &b)
	{
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

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (materia[i])
		{
			if (materia[i]->getType() == type)
			{
				return materia[i]->clone();
			}
		}
	}
	return 0;
}

void MateriaSource::learnMateria(AMateria* m)
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
