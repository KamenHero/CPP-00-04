/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:51:15 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/01 18:51:46 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound()
{
	std::cout << "Angry noise intensifies" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
	{
		type = b.type;
	}
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}
