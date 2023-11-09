/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:01:38 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/02 18:40:00 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor called" << std::endl;
	brain = new Brain();
	type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

void Cat::makeSound()const
{
	std::cout << "Nya Nya" << std::endl;
}

Cat &Cat::operator=(const Cat &b)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &b)
	{
		type = b.type;
		if (brain)
			delete brain;
		brain = new Brain(*b.brain);
	}
	return *this;
}

Cat::Cat(const Cat &b): brain(NULL)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = b;
}
