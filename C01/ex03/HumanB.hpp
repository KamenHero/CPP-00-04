/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:28:35 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/10 14:44:42 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
	public:
		Weapon *weapon;
		std::string name;
	public:
		HumanB(std::string _name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &_weapon);
};
