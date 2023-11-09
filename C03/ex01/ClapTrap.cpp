/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:30:44 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/31 16:42:26 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("random"), HitPoint(10), energy(10), Adamage(0)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name): name(_name), HitPoint(10), energy(10), Adamage(0)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &b)
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

ClapTrap::ClapTrap(const ClapTrap &b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}

void ClapTrap::attack(const std::string& target)
{
	if (energy > 0 && HitPoint > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << Adamage << " points of damage!\n";
		energy--;
	}
	else
		std::cout << "Not enough energy or hit points." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount >= 0)
	{
		if (energy > 0 && HitPoint > 0)
		{
			std::cout << name << " took " << amount << " damage." << std::endl;
			HitPoint -= amount;
		}
		else
			std::cout << "Not enough energy or hit points." << std::endl;
	}
	else
		std::cout << "The amount can't be negative." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)amount >= 0)
	{
		if (energy > 0 && HitPoint > 0)
		{
			std::cout << name << " repaired himself with " << amount << " point." << std::endl;
			HitPoint += amount;
			energy--;
		}
		else
			std::cout << "Not enough energy or hit points." << std::endl;
	}
	else
		std::cout << "The amount can't be negative." << std::endl;
}
