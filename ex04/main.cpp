/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:30:42 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/06 17:39:20 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid arguments: format is [./ex04 <filename> str1 str2]" << std::endl;
		return 1;
	}
	if (*argv[2] == '\0' || *argv[3] == '\0')
	{
		std::cout << "Invalid arguments: You must write str1 and str2" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string str1 = argv[2];
	std::string str2 = argv[3];

	//infile open using ifstream class. we need to check the file error by using is_open(). 
	std::ifstream inFile(filename);
	if (!inFile.is_open())
	{
		std::cerr << "file error: " << filename <<": Couldn't open the infile" << std::endl;
		return (1);
	}
	
	//outfile open using ofstream class.
	std::ofstream outFile("outfile");
	if (!outFile.is_open())
	{
		std::cerr << "file error: outfile: Couldn't open the outfile" << std::endl;
		inFile.close();
		return (1);
	}
	
	//making a line from infile
	std::string lines;
	std::string line;
	while (std::getline(inFile, line))
		lines += (line + "\n");
	
	//creating a line to write in outfile from lines.
	std::string outLines;
	size_t index;
	size_t start = 0;
	//size_t find(str: target string, start: starting index) { return the first index from start }
	//if there is no str find() returns str::string::nops
	while (index = lines.find(str1, start) != std::string::npos)
	{
		//substr(start: start index, end: end index) {return str: put out the str from start to index}
		//if there is no end argument, put out str from start to the end of the str
		outLines += (lines.substr(start, index - start) + str2);
		start = index + str1.length();
	}
	outLines += lines.substr(start);

	//write in outfile
	outFile << outLines;

	inFile.close();
	outFile.close();
	return (0);
}
