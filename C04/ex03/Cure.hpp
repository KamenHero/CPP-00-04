/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:46:49 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/05 16:52:17 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure &b);
		~Cure();
		Cure &operator=(const Cure &);
		AMateria* clone() const;
		void use(ICharacter& target);	
};
