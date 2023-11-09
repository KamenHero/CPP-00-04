/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:06:41 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/06 16:16:51 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Structing.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *materia[4];
		Utils head;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &b);
		~MateriaSource();
		MateriaSource &operator=(const MateriaSource &);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
