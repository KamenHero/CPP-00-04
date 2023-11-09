/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:43:20 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/26 15:48:44 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	testing(void)
{
	Zombie *zombiehorde;
	std::string name = "ZOMBIE";
	int N = 4;
	zombiehorde = zombieHorde(N, name);
	for (int i = 0;i < N; i++)
	{
		zombiehorde[i].announce();
	}
	delete [] zombiehorde;
}

int main()
{
	testing();
	system("leaks zombieHorde");
}