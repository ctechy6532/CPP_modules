/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:27:12 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/22 14:27:13 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal*   j = new Dog();
    const Animal*   i = new Cat();
	int				n = 10;
	Animal			*animal[n];

    delete i;//should not create a leak
    delete j;

	std::cout << std::endl;
	for (int i = 0; i < n; i++)
	{
		if (i == n / 2)
			std::cout << std::endl;
		if (i < n / 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	std::cout << std::endl;

	for (int j = 0; j < n; j++)
	{
		if (j == n / 2)
			std::cout << std::endl;
		delete animal[j];
	}
	std::cout << std::endl;
	
	// Cat*	test = new Cat();
	// Cat*	copy = new Cat();

	// test = copy;
	// std::cout << copy->getBrain() << std::endl;
	// std::cout << test->getBrain() << std::endl;
	// delete copy;


	// Cat* test = new Cat();
	// Cat* copy = new Cat(*test);

	// std::cout << copy->getBrain() << std::endl;
	// std::cout << test->getBrain() << std::endl;
	// delete copy;

	system("leaks polymorphisme");

	return 0;
}