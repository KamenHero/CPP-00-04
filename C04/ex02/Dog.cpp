/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:01:50 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/02 18:31:28 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor called" << std::endl;
	brain = new Brain();
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

void Dog::makeSound()const
{
	std::cout << "Bark Bark" << std::endl;
}

Dog &Dog::operator=(const Dog &b)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &b)
	{
		type = b.type;
		if (brain)
			delete brain;
		brain = new Brain(*b.brain);
	}
	return *this;
}

Dog::Dog(const Dog &b): brain(NULL)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = b;
}
