/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:27:57 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/22 14:27:58 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog( Dog const & src)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	
	*this = src;
	return ;
}

Dog &	Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog: Assignement operator called" << std::endl;

	type = rhs.getType();
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof !!!!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
}
