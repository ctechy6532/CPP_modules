/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:38:17 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/15 16:38:19 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string type);
	~Weapon();
	std::string const &getType();
	void	setType(std::string new_value);
};



#endif
