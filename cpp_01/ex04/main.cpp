/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:43:03 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/14 16:43:04 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Manipulation.hpp"
#include <iostream>

int main(int ac, char **argv)
{
	if (ac != 4)
	{
		std::cout << "You need to put 3 args. A filename and 2 strings !" << std::endl;
		return 1;
	}
	Manipulation instance(argv[1], argv[2], argv[3]);
	instance.replace();
	return 0;
}