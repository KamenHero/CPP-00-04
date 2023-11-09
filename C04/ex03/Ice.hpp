/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:44:01 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/06 15:59:24 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &b);
		~Ice();
		Ice &operator=(const Ice &);
		AMateria* clone() const;
		void use(ICharacter& target);
};
