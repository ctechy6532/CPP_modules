/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:22:56 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/21 18:23:00 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("", 100, 100, 30)
{
	std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap: Default constructor -> " << _name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap: Can we do a high fives ??" << std::endl;
}
