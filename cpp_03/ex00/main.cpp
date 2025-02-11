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

#include "ClapTrap.hpp"

int main()
{
    std::string s1 = "Player";
    ClapTrap    player(s1);


    /* the player got 10 lifes 10 energy points 0 attack damage */

    std::cout << std::endl;
    player.attack("Enemy");
    player.takeDamage(9);
    player.beRepaired(30);
    player.takeDamage(31);
    player.beRepaired(10);
    std::cout << std::endl;

    /* test for no more energy */

    /*std::cout << std::endl;
    for (int i = 0; i < 10; i++)
    {
        player.attack("Enemy");
    }
    player.beRepaired(10);
    std::cout << std::endl;*/

    return 0;
}
