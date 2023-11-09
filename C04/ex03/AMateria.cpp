/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:54:10 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/06 16:40:19 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include "ICharacter.hpp"

AMateria::AMateria()
{
	// std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
	{
		_type = b._type;
	}
	return *this;
}

AMateria::AMateria(const AMateria &b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}

AMateria::AMateria(std::string const & type)
{
	_type = type;
}

std::string const &AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "RawMateria: \"* " << target.getName() << "*\"" << std::endl;
}
