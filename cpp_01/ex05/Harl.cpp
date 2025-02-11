/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:24:53 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/16 16:24:54 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout << "This is DEBUG right here !!" << std::endl;
}

void	Harl::info()
{
	std::cout << "This is INFO right here !!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "This is WARNING right here !!" << std::endl;
}

void	Harl::error()
{
	std::cout << "This is ERROR right here !!" << std::endl;
}

void	Harl::complain( std::string level )
{
	void	(Harl::*f[4])(void);
	std::string input[4] = {"debug", "info", "warning", "error"};
	int i = 0;
	f[0] = &Harl::debug;
	f[1] = &Harl::info;
	f[2] = &Harl::warning;
	f[3] = &Harl::error;
	while (input[i] != level)
		i++;
	(this->*f[i])();
}