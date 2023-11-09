/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:18:00 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/31 16:41:58 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	name = "Random";
	HitPoint = 100;
	energy = 50;
	Adamage = 20;
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name)
{
	name = _name;
	HitPoint = 100;
	energy = 50;
	Adamage = 20;
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
	{
		name = b.name;
		HitPoint = b.HitPoint;
		energy = b.energy;
		Adamage = b.Adamage;
	}
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}

void ScavTrap::attack(const std::string& target)
{
	if (energy > 0 && HitPoint > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << Adamage << " points of damage!\n";
		energy--;
	}
	else
		std::cout << "Not enough energy or hit points." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
}
