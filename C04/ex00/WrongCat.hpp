/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:52:10 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/01 19:11:03 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat  : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &b);
		~WrongCat();
		WrongCat &operator=(const WrongCat &);
		void makeSound();
};
