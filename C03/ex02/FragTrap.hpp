/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:02:13 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/29 18:04:54 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string);
		~FragTrap();
		FragTrap(const FragTrap&);
		FragTrap & operator=(const FragTrap &);
		void attack(const std::string& target);
		void highFivesGuys(void);
};
