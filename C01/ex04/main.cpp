/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:01:56 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/13 16:20:22 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char**argv)
{
	if (ac != 4)
	{
		std::cerr << "Error: Argument" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream inputFile(filename);
	if (!inputFile)
	{
		std::cerr << "Error: Input" << std::endl;
		return 1;
	}
	std::string outputFilename = filename + ".replace";
	std::ofstream outputFile(outputFilename);
	if (!outputFile)
	{
		std::cerr << "Error: Output" << std::endl;
		return 1;
	}
	size_t index = 0;
	int first_check = 0;
	std::string line;
	std::getline(inputFile, line, '\0');
	if (s1 == "")
	{
		outputFile << line;
		inputFile.close();
		outputFile.close();
		return 0;
	}
	index = line.find(s1,index);
	while (index != std::string::npos)
	{
		if (first_check)
			index = line.find(s1,index + s2.length());
		if (index != std::string::npos)
		{
			line.erase(index, s1.length());
			line.insert(index,s2);
		}
		first_check++;
	}
	outputFile << line;
	inputFile.close();
	outputFile.close();
}
