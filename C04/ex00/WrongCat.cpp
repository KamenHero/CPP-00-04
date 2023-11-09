/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:53:20 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/01 18:53:55 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound()
{
	std::cout << "Nya Nya" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
	{
		type = b.type;
	}
	return *this;
}

WrongCat::WrongCat(const WrongCat &b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}
