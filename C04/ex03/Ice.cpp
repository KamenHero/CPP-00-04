/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:56:51 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/06 16:57:34 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
	_type = "ice";
	// std::cout << "Ice Constructor called" << std::endl;
}

Ice::~Ice()
{
	// std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
	{
		_type = b._type;
	}
	return *this;
}

AMateria* Ice::clone() const
{
	Ice *ice = new Ice();
	return ice;
}

Ice::Ice(const Ice &b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*\"" << std::endl;
}
