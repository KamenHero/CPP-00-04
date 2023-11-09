/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Structing.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:56:36 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/06 16:09:46 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"

struct ToFree
{
	ToFree(AMateria *amateria);
	AMateria	*data;
	ToFree		*next;
};

struct Utils
{
	ToFree *head;
	Utils();
	void freeNode();
	void addBack(AMateria *amateria);
};

