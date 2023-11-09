/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:51:09 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/02 18:24:08 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &b)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &b)
	{
		for(int i = 0; i < 100 ;i++)
			ideas[i] = b.ideas[i];
	}
	return *this;
}

Brain::Brain(const Brain &b)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = b;
}
