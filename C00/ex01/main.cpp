/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:27:59 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/28 23:27:19 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	checkdig(string name)
{
	for(int i = 0; name[i] != '\0'; i++)
	{
		if (!(name[i] >= 48 && name[i] <= 57))
			return(1);
	}
	return (0);
}

void	printingname(string name)
{
	if (name.size() < 10)
	{
		std::cout << std::setw(10);
		cout <<  name;
	}
	else if (name.size() > 10)
	{
		for (int i = 0;i < 9; i++)
			cout << name[i];
		cout << ".";
	}
	else
		cout << name;
}

int main()
{
	string	name;
	PhoneBook	phonebook;
	string	x;
	int		x2;
	
	for (int y = 0; y < 8; y++)
	{
		cout << "*********************************************\n";
		cout << "|           Choose your command             |\n";
		cout << "*********************************************\n";
		cout << "|                   ADD                     |\n";
		cout << "|                  SEARCH                   |\n";
		cout << "|                   EXIT                    |\n";
		cout << "*********************************************\n";
		getline(cin, name);
		if (cin.eof())
			exit(1);
		if (name == "ADD")
		{
			for (int i = 0; i < 5; i++)
			{
				if (i == 0)
				{
					cout << "Enter your first name:\n";
					if (!phonebook.setting(i, y))
						i--;
				}
				if (i == 1)
				{
					cout << "Enter your last name:\n";
					if (!phonebook.setting(i, y))
						i--;
				}
				if (i == 2)
				{
					cout << "Enter your nickname:\n";
					if (!phonebook.setting(i, y))
						i--;
				}
				if (i == 3)
				{
					cout << "Enter your phonenumber:\n";
					if (!phonebook.setting(i, y))
						i--;
				}
				if (i == 4) 
				{
					cout << "Enter your darkest secret:\n";
					if (!phonebook.setting(i, y))
						i--;
				}
			}
		}
		else if (name == "SEARCH")
		{
			y--;
			cout << "*********************************************\n";
			cout << "|  index   |Fist  name|Last  name| Nickname |\n";
			cout << "*********************************************\n";
			for (int i = 0; i < 8; i++)
			{
				name = phonebook.contact[i].getfname();
				if (!name[0])
					break;
				cout << "|";
				std::cout << std::setw(10);
				cout << i;
				cout << "|";
				printingname(name);
				name = phonebook.contact[i].getlname();
				cout << "|";
				printingname(name);
				name = phonebook.contact[i].getnname();
				cout << "|";
				printingname(name);
				cout << "|";
				cout << "\n";
				cout << "*********************************************\n";
			}
			cout << "Enter the index\n";
			int c = 0;
			getline(cin, x);
			if (cin.eof())
				exit(1);
			x2 = std::atoi(x.c_str());
			if (x2 == 0 && checkdig(x))
				c++;
			cout <<"CHECKING THE CONTACT.....\n";
			if (x2 < 0 || x2 > 7 || !x[0] || !phonebook.contact[x2].getfname()[0])
			{
				cout << "Not found....\n";
				c++;
			}
			if (!c)
			{
				name = phonebook.contact[x2].getfname();
				cout << "|First name:" << name << "|\n";
				name = phonebook.contact[x2].getlname();
				cout << "|Last name:" << name << "|\n";
				name = phonebook.contact[x2].getnname();
				cout << "|Nickname:" << name << "|\n";
				name = phonebook.contact[x2].getpname();
				cout << "|Phonenumber:" << name << "|\n";
				name = phonebook.contact[x2].getsname();
				cout << "|Dark secret:" << name << "|\n";
			}
		}
		else if (name == "EXIT")
		{
			cout << "....\n";
			cout << "....\n";
			cout << "....\n";
			cout << "see ya\n";
			return (0);
		}
		else
		{
			y--;
			cout << "Command not found ....\n";
		}
		if (y == 7)
			y = -1;
	}
}
