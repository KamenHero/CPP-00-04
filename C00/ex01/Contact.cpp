/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:04:30 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/03 17:20:57 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Contact::setfname(string	name)
{
	firstname = name;
}

void	Contact::setlname(string	name)
{
	lastname = name;
}

void	Contact::setnname(string	name)
{
	nickname = name;
}

void	Contact::setpname(string	name)
{
	phonenumber = name;
}

void	Contact::setsname(string	name)
{
	darksecret = name;
}

string	Contact::getfname()
{
	return (firstname);
}

string	Contact::getlname()
{
	return (lastname);
}

string	Contact::getnname()
{
	return (nickname);
}

string	Contact::getpname()
{
	return (phonenumber);
}

string	Contact::getsname()
{
	return (darksecret);
}
