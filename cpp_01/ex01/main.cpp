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

#include "Zombie.hpp"

int main()
{
	Zombie *instancep;
	int	N;

	N = 10;
	if (N < 1)
	{
		std::cout << "The number of the zombies can't be null or negative" << std::endl;
		return (1);
	}
	instancep = zombieHorde(N, "ZombieHorde");
	for (int i = 0; i < N; i++)
		instancep[i].announce();
	delete[] instancep;
	return (0);
}