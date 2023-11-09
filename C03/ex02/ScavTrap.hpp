/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:33:43 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/29 17:55:20 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string);
		~ScavTrap();
		ScavTrap(const ScavTrap&);
		ScavTrap & operator=(const ScavTrap &);
		void attack(const std::string& target);
		void guardGate();
};
