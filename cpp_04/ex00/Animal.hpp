/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:27:45 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/22 14:27:46 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
	std::string type;

private:
	
public:
	Animal();
	Animal( Animal const & src);
	Animal &	operator=( Animal const &rhs );
	virtual void	makeSound() const;
	std::string	getType() const;
	virtual ~Animal();
};



#endif

