/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:36:22 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/24 15:55:27 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
	if (N <= 0)
	{
		exit(1);
	}
	Zombie* zombiehorde = new Zombie[N];
	for(int i = 0; i < N ; i++)
	{
		zombiehorde[i].setName(name);
	}
	return zombiehorde;
}
