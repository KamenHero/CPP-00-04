/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:00:49 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/05 16:17:05 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "PhoneBook.hpp"

using std::getline;
using std::cout;
using std::cin;
using std::string;
using std::endl;

class Contact
{
	private :
		string	firstname;
		string	lastname;
		string	nickname;
		string	phonenumber;
		string	darksecret;

	public :
		void	setfname(string	name);
		void	setlname(string	name);
		void	setnname(string	name);
		void	setpname(string	name);
		void	setsname(string	name);
		string	getfname();
		string	getlname();
		string	getnname();
		string	getpname();
		string	getsname();
};

int	checkdig(string name);

#endif