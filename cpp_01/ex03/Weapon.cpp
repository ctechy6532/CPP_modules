/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:38:32 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/15 16:38:33 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
}

std::string	const &Weapon::getType() 
{
	return _type;
}

void	Weapon::setType(std::string new_value)
{
	_type = new_value;
}