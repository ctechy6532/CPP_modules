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

	randomChump("Zombie1");
	instancep = newZombie("Zombie2");
	instancep->announce();
	delete instancep;

	return 0;
}