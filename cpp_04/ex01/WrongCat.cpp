/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:13:28 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/22 15:13:29 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const & src)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	
	*this = src;
	return ;
}

WrongCat &	WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "WrongCat: Assignement operator called" << std::endl;

	type = rhs.getType();
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meowwwwwww !!!!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called" << std::endl;
}
