/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:21:23 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/23 13:21:29 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal: Default constructor called" << std::endl;
}

AAnimal::AAnimal( AAnimal const & src)
{
	std::cout << "AAnimal: Copy constructor called" << std::endl;
	
	*this = src;
	return ;
}

AAnimal &	AAnimal::operator=( AAnimal const & rhs )
{
	std::cout << "AAnimal: Assignement operator called" << std::endl;

	type = rhs.getType();
	return *this;
}

std::string	AAnimal::getType() const
{
	return type;
}

void	AAnimal::makeSound() const
{
	std::cout << "This is an AAnimal sound" << std::endl;
}
AAnimal::~AAnimal()
{
	std::cout << "AAnimal: Destructor called" << std::endl;
}
