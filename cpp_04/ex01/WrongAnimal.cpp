/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:13:40 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/22 15:13:41 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src)
{
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	
	*this = src;
	return ;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "WrongAnimal: Assignement operator called" << std::endl;

	type = rhs.getType();
	return *this;
}

std::string	WrongAnimal::getType() const
{
	return type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "This is an WrongAnimal sound" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}