/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:21:23 by oryadi            #+#    #+#             */
/*   Updated: 2023/09/22 15:35:59 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl,
			0);
	for (int word = 1; word < argc; word++)
	{
		for (int idx = 0; argv[word][idx]; idx++)
			std::cout << (char)toupper(argv[word][idx]);
	}
		std::cout << "\n";
	return 0;
}
