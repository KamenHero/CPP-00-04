/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:01:38 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/01 19:02:52 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound()const
{
	std::cout << "Nya Nya" << std::endl;
}

Cat &Cat::operator=(const Cat &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
	{
		type = b.type;
	}
	return *this;
}

Cat::Cat(const Cat &b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}
