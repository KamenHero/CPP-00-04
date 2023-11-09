/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:33:38 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/26 15:50:24 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name): weapon(NULL), name(_name)
{
	std::cout << "HumanB Constructor called" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB Destructor called" << std::endl;
}

void HumanB::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &_weapon;
}
