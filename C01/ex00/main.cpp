/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:24:17 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/25 02:12:28 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	testing(void)
{
	Zombie *_new;
	std::string name;
	
	name = "ZOMBIE";
	_new = newZombie(name);
	_new->announce();
	randomChump(name);
	delete _new;
}

int main()
{
	testing();
}