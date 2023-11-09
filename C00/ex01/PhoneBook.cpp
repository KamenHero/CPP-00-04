/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:42:09 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/05 16:19:23 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::setting(int i, int index)
{
	string	name;
	getline(cin, name);
	if (cin.eof())
		exit(1);
	if (!name[0])
		return (0);
	if (i == 0)
		contact[index].setfname(name);
	else if (i == 1)
		contact[index].setlname(name);
	else if (i == 2)
		contact[index].setnname(name);
	else if (i == 3)
	{
		if (checkdig(name))
		{
			cout << "Phone Number must be numbers obviously \n";
			return (0);
		}
		contact[index].setpname(name);
	}
	else if (i == 4)
		contact[index].setsname(name);
	return (1);
}
