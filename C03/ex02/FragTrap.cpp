/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:02:06 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/31 17:47:31 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	name = "Random";
	HitPoint = 100;
	energy = 100;
	Adamage = 30;
	std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string _name)
{
	name = _name;
	HitPoint = 100;
	energy = 100;
	Adamage = 30;
	std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &b)
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

FragTrap::FragTrap(const FragTrap &b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}

void FragTrap::attack(const std::string& target)
{
	if (energy > 0 && HitPoint > 0)
	{
		std::cout << "FragTrap " << name << " attacks " << target << ", causing " << Adamage << " points of damage!\n";
		energy--;
	}
	else
		std::cout << "Not enough energy or hit points." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap request high fives!" << std::endl;
}
