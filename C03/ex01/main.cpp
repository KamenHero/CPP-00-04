/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:31:03 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/29 17:56:42 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::string name = "the trap";
	ClapTrap claptrap(name);
	std::string target = "target";
	claptrap.attack(target);
	claptrap.takeDamage(9);
	claptrap.beRepaired(10);
	std::string nname = "the Scav";
	ScavTrap scavtrap(nname);
	std::string ttarget = "target";
	scavtrap.attack(ttarget);
	scavtrap.takeDamage(9);
	scavtrap.beRepaired(10);
	scavtrap.guardGate();
}
