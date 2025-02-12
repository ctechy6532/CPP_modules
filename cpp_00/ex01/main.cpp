/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:39:19 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/13 14:39:20 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

int main()
{
	int i;
	bool checker = false;
	std::string input;
	PhoneBook instance;

	i = 0;
	while (1)
	{
        std::cout << "PhoneBook: ";
        std::getline(std::cin, input);
		if (input == "ADD")
		{
			if (i > 7)
			{
				i = 0;
				checker = true;
			}
			instance.add_input(i);
			i++;
		}
		else if (input == "EXIT")
			break;
		else if (input == "SEARCH")
		{
			instance.print_canvas();
			instance.print_all_contact(i, checker);
		}
		
	}
	return (0);
}