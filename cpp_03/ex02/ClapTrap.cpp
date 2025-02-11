/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:47:59 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/20 16:48:00 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap: Default constructor called" << std::endl;

	_name = "";
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;

	return;
}

ClapTrap::ClapTrap( std::string name, int hit_points, int energy_points, int attack_damage)
{
	std::cout << "ClapTrap: constructor called" << std::endl;
	_name = name;
	_hit_points = hit_points;
	_energy_points = energy_points;
	_attack_damage = attack_damage;

	return;
}

ClapTrap::ClapTrap( std::string name) : _name(name)
{
	std::cout << "ClapTrap: Default constructor -> " << _name << std::endl;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;

	return;
}

ClapTrap::ClapTrap( ClapTrap const & src)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = src;
	return;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "Assignement operator called" << std::endl;

	_name = rhs._name;
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	_attack_damage = rhs._attack_damage;

	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called" << std::endl;

	return;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hit_points <= 0)
	{
		std::cout << "ClapTrap: " << _name << " have no more lifes!" << std::endl;
		return ;
	}
	if (_energy_points <= 0)
	{
		std::cout << "ClapTrap: " << _name << " have no more energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap: " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{

	std::cout << "ClapTrap: " << _name << " take " << amount << " damage!" << std::endl;
	_hit_points = _hit_points - amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points <= 0)
	{
		std::cout << "ClapTrap: " << _name << " have no more lifes!" << std::endl;
		return ;
	}
	if (_energy_points <= 0)
	{
		std::cout << "ClapTrap: " << _name << " have no more energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap: " << _name << " repaired itself " << amount << " hit points!" << std::endl;
	_hit_points = _hit_points + amount;
	_energy_points--;
}