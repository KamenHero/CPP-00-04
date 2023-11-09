/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:46:35 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/27 17:29:00 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::string name = "the trap";
	ClapTrap claptrap(name);
	std::string target = "target";
	claptrap.attack(target);
	claptrap.takeDamage(9);
	claptrap.beRepaired(10);
}
