/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:27:34 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/22 14:27:35 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal( Animal const & src)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	
	*this = src;
	return ;
}

Animal &	Animal::operator=( Animal const & rhs )
{
	std::cout << "Animal: Assignement operator called" << std::endl;

	type = rhs.getType();
	return *this;
}

std::string	Animal::getType() const
{
	return type;
}

void	Animal::makeSound() const
{
	std::cout << "This is an Animal sound" << std::endl;
}
Animal::~Animal()
{
	std::cout << "Animal: Destructor called" << std::endl;
}
