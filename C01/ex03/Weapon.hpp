/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:20:57 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/10 14:27:45 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string _name);
		~Weapon();
		std::string getType();
		void	setType(std::string);
};
