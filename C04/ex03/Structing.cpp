/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Structing.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:40:12 by oryadi            #+#    #+#             */
/*   Updated: 2023/11/06 16:34:32 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Structing.hpp"

ToFree::ToFree(AMateria *_data)
{
	data = _data;
	next = NULL;
}

Utils::Utils(): head(NULL)
{}

void Utils::freeNode()
{
	ToFree *tmp;
	while (head)
	{
		tmp = head;
		head = head->next;
		delete tmp->data;
		delete tmp;
	}
}

void Utils::addBack(AMateria *amateria)
{
	ToFree *newnode = new ToFree(amateria);
	if (head == NULL)
		head = newnode;
	else
	{
		ToFree *tmp = head;
		while (tmp->data != newnode->data && tmp->next)
			tmp = tmp->next;
		if (tmp->data != newnode->data)
			tmp->next = newnode;
		else
			delete newnode;
	}	
}
