/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:54:09 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/02 18:40:40 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	// const Animal* animal[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
	// for (int i = 0; i < 4; i++)
	// {
	// 	delete animal[i];
	// }
	// const Animal *ani = new Dog();
	Dog basic;
	{
		Dog tmp = basic;
		basic = tmp;
	}
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();
// delete meta;
// delete i;
// delete j;
// return 0;
}
