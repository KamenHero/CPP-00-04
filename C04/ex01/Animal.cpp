/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:01:09 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/01 19:05:14 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound()const
{
	std::cout << "Angry noise intensifies" << std::endl;
}

Animal &Animal::operator=(const Animal &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
	{
		type = b.type;
	}
	return *this;
}

Animal::Animal(const Animal &b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}

std::string Animal::getType()const
{
	return type;
}
