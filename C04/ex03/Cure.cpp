/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:56:09 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/06 16:57:43 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

Cure::Cure()
{
	_type = "cure";
	// std::cout << "Cure Constructor called" << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
	{
		_type = b._type;
	}
	return *this;
}

AMateria* Cure::clone() const
{
	Cure *cure = new Cure();
	return cure;
}

Cure::Cure(const Cure &b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds*\"" << std::endl;
}
