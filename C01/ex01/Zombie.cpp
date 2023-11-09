/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:31:38 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/26 15:48:10 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie()
{
	std::cout << "constructor called" << std::endl; 
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << "constructor called" << std::endl; 
}

Zombie::~Zombie()
{
	std::cout << _name << " destructor called" << std::endl; 
}

void	Zombie::setName(std::string name)
{
	_name = name;
}
