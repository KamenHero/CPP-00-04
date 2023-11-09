/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:07:27 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/25 02:11:45 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void	Zombie::announce(void)
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
