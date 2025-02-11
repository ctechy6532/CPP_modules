/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:06:02 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/21 15:06:04 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20)
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap: Default constructor -> " << _name << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap enter in Gate keeper mode!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hit_points <= 0)
	{
		std::cout << "ScavTrap: " << _name << " have no more lifes!" << std::endl;
		return ;
	}
	if (_energy_points <= 0)
	{
		std::cout << "ScavTrap: " << _name << " have no more energy!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap: " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_energy_points--;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}