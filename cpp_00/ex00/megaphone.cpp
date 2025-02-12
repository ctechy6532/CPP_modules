/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:15:11 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/13 14:15:15 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <cstring>

int main(int ac, char **argv)
{
	char	buf;

	if (ac == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; j < strlen(argv[i]); j++)
			{
				buf = toupper(argv[i][j]);
				std::cout << buf;
			}
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
