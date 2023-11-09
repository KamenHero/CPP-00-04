/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:25:52 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/26 15:50:12 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _name): type(_name)
{
	std::cout << "Weapon Constructor called" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor called" << std::endl;
}

std::string Weapon::getType()
{
	return type;
}

void	Weapon::setType(std::string weapon)
{
	type = weapon;
}
