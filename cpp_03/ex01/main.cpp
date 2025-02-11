/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:47:31 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/20 16:47:32 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::string s1 = "Player";
    std::string s2 = "Enemy";
    ClapTrap    player(s1);
    ScavTrap    enemy(s2);


    /* the player got 10 lifes 10 energy points 0 attack damage */
    std::cout << std::endl;
    player.attack(s2);
    player.takeDamage(9);
    player.beRepaired(30);
    player.takeDamage(31);
    player.beRepaired(10);
    std::cout << std::endl;

    /* the enemy got 100 lifes 50 energy points 20 attack damage */
    std::cout << std::endl;
    enemy.guardGate();
    enemy.attack(s1);
    enemy.takeDamage(50);
    enemy.beRepaired(30);
    enemy.takeDamage(80);
    enemy.beRepaired(10);
    std::cout << std::endl;

    return 0;
}
