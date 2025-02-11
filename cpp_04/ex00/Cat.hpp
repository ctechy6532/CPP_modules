/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:28:24 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/22 14:28:25 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
private:
	
public:
	Cat();
	Cat( Cat const & src);
	Cat &	operator=( Cat const &rhs );
	virtual void	makeSound() const;
	~Cat();
};




#endif

