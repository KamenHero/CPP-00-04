/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:01:50 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/01 19:02:45 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound()const
{
	std::cout << "Bark Bark" << std::endl;
}

Dog &Dog::operator=(const Dog &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
	{
		type = b.type;
	}
	return *this;
}

Dog::Dog(const Dog &b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}
