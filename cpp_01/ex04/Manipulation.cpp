/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Manipulation.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:49:55 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/16 13:49:56 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Manipulation.hpp"

Manipulation::Manipulation(std::string filename, std::string s1, std::string s2)
{
	_filename = filename;
	_s1 = s1;
	_s2 = s2;
}

Manipulation::~Manipulation()
{
}

void	Manipulation::replace_line(std::string &line)
{
	int pos;

	pos = line.find(_s1);
	while (pos != -1)
	{
		line.erase(pos, _s1.length());
		line.insert(pos, _s2);
		pos = line.find(_s1);
	}
}

bool	Manipulation::check_existLine(std::string &line)
{
	bool checker = true;
	int pos = line.find(_s1);

	if (pos == -1)
		checker = false;
	return checker;
}

int	Manipulation::replace(void)
{
	bool	checker = false;
	std::ifstream inFile;
	std::string filename_outFile;
	std::string line;
	std::string tmp;

	filename_outFile = this->_filename + ".replace";
	
	inFile.open(_filename);
	if (!inFile)
	{
		std::cout << "The file doesn't exist" << std::endl;
		return 1;
	}
	while (getline(inFile, tmp))
	{
		if (check_existLine(tmp) == true)
		{
			checker = true;
			break;
		}
		else
			continue;
	}
	if (checker == false)
	{
		std::cout << "The first string is not found in the file" << std::endl;
		return 1;
	}
	inFile.clear();
	inFile.seekg(0, std::ios::beg);
	std::ofstream outFile(filename_outFile);
	if (!outFile)
	{
		std::cout << "The file doesn't exist" << std::endl;
		return 1;
	}
	while (getline(inFile, line))
	{
		replace_line(line);
		outFile << line << std::endl;
	}
	inFile.close();
	outFile.close();

	return 0;
}
