/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:39:30 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/15 16:39:32 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"
class HumanB
{
private:
	std::string _name;
	Weapon *_weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void	attack();
	void setWeapon(Weapon &weapon);
};

#endif
