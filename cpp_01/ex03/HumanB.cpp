/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:39:45 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/15 16:39:46 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

HumanB::~HumanB()
{

}

void	HumanB::attack()
{
	if (_weapon != NULL)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " tries to attack with no weapon " << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}