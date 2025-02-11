/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:05:00 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/15 16:05:01 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *instancep;

	instancep = new Zombie[N];
	for (int i = 0; i < N; i++)
		instancep[i].set_name(name);
	return (instancep);
}