/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:26:09 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/10 14:34:54 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
	public:
		Weapon &weapon;
		std::string name;
	public:
		HumanA(std::string _name, Weapon &_weapon);
		~HumanA();
		void attack();
};
