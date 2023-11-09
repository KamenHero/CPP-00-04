/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:33:05 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/05 15:53:08 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PHONEBOOK_HPP)
#define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Contact.hpp"
# include <iomanip>

using std::getline;
using std::cout;
using std::cin;
using std::string;
using std::endl;

class PhoneBook
{
	public:
		Contact	contact[8];
	public:
		int		setting(int i, int index);
};

#endif
