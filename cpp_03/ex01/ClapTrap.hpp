/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:47:45 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/20 16:47:46 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
protected:
	std::string _name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;
public:
	ClapTrap();
	ClapTrap( std::string name, int hit_points, int energy_points, int attack_damage);
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const & src);
	ClapTrap &	operator=( ClapTrap const & rhs );
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amout);
	void	beRepaired(unsigned int amout);
};



#endif
