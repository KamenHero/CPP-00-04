/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:31:04 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/26 15:50:19 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon):weapon(_weapon), name(_name)
{
	std::cout << "HumanA Constructor called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA Destructor called" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << name << "attacks with their" << weapon.getType() << std::endl;
}
