/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:59:55 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/29 18:00:01 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		int HitPoint;
		int energy;
		int Adamage;
	public:
		ClapTrap();
		ClapTrap(std::string);
		~ClapTrap();
		ClapTrap(const ClapTrap&);
		ClapTrap & operator=(const ClapTrap &);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

