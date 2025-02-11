/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:28:13 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/22 14:28:15 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat: Default constructor called" << std::endl;

	_brain = new Brain();
}

Cat::Cat( Cat const & src)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	
	_brain = new Brain(*src.getBrain());
	return ;
}

Cat &	Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat: Assignement operator called" << std::endl;

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

void	Cat::makeSound() const
{
	std::cout << "Meowwwwwww !!!!" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return this->_brain;
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;

	delete _brain;
}
