/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:29:39 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/02 15:26:40 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat  : public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(const Cat &b);
		~Cat();
		Cat &operator=(const Cat &);
		void makeSound()const;
};
