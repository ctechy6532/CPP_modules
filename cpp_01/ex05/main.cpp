/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:43:03 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/14 16:43:04 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl instance;

	instance.complain("debug");
	instance.complain("info");
	instance.complain("warning");
	instance.complain("error");
	return 0;
}