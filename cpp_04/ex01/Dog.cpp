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

	_brain = new Brain();
}

Dog::Dog( Dog const & src)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	
	_brain = new Brain(*src.getBrain());
	return ;
}

Dog &	Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog: Assignement operator called" << std::endl;

    if (&rhs != this)
	{
		delete _brain;
		_brain = new Brain(*rhs.getBrain());
		_brain = rhs.getBrain();
		type = rhs.getType();
		return *this;
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof !!!!" << std::endl;
}

Brain	*Dog::getBrain() const
{
	return this->_brain;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;

	delete _brain;
}
