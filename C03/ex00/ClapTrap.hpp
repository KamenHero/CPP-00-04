/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:22:57 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/29 17:27:46 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int HitPoint;
		int energy;
		int Adamage;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap&);
		ClapTrap(std::string);
		~ClapTrap();
		ClapTrap & operator=(const ClapTrap &);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

