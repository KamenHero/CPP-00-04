/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:00:25 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/29 19:45:41 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::string name = "the trap";
	ClapTrap claptrap(name);
	std::string target = "target";
	claptrap.attack(target);
	claptrap.takeDamage(9);
	claptrap.beRepaired(10);
	std::string nname = "the Scav";
	FragTrap fragtrap(nname);
	std::string ttarget = "target";
	fragtrap.attack(ttarget);
	fragtrap.takeDamage(9);
	fragtrap.beRepaired(10);
	fragtrap.highFivesGuys();
}
