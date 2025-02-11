/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Manipulation.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:48:33 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/16 13:48:34 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MANIPULATION_HPP
#define MANIPULATION_HPP
#include <iostream>
#include <fstream>
#include <string>
class Manipulation
{
private:
	std::string _filename;
	std::string _s1;
	std::string _s2;
public:
	Manipulation(std::string filename, std::string s1, std::string s2);
	~Manipulation();
	int	replace();
	void replace_line(std::string &line);
	bool check_existLine(std::string &line);
};



#endif
