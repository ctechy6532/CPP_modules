/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:28:04 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/22 14:28:06 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*_brain;
public:
	Dog();
	Dog( Dog const & src);
	Dog &	operator=( Dog const &rhs );
	virtual void	makeSound() const;
	Brain	*getBrain() const;
	~Dog();
};



#endif

