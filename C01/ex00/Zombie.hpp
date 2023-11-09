/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:01:02 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/09 14:57:02 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class Zombie
{
    private:
		std::string _name;
	public:
		Zombie();
		Zombie(std::string);
		~Zombie();
		void	announce();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
