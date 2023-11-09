/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:27:19 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/09 17:23:19 by oryadi           ###   ########.fr       */
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
		void	setName(std::string);
};

Zombie* zombieHorde( int N, std::string name );
