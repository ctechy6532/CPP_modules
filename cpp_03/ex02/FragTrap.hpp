/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:23:17 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/21 18:23:18 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	
public:
	FragTrap();
	FragTrap( std::string name );
	~FragTrap();
	void	highFivesGuys(void);
};


#endif

