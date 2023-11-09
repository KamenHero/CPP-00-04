/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:30:58 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/01 19:10:24 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog  : public Animal
{
	public:
		Dog();
		Dog(const Dog &b);
		~Dog();
		Dog &operator=(const Dog &);
		void makeSound()const;
};
