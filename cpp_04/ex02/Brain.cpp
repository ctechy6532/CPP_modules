/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:29:58 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/22 17:29:59 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain( Brain const & src)
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	
	*this = src;
	return ;
}

Brain &	Brain::operator=( Brain const & rhs )
{
	std::cout << "Brain: Assignement operator called" << std::endl;

	for (int i = 0; i < 100; i++)
        _ideas[i] = rhs._ideas[i];
	return *this;
}


Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
}
