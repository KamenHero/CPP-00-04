/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:29:39 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/01 19:10:18 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat  : public Animal
{
	public:
		Cat();
		Cat(const Cat &b);
		~Cat();
		Cat &operator=(const Cat &);
		void makeSound()const;
};
