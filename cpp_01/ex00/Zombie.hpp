/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:44:32 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/14 16:44:33 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
class Zombie
{
private:
	std::string _name;
public:
	Zombie(std::string name);
	~Zombie();
	void	announce(void);
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif
