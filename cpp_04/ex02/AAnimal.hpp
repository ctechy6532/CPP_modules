/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:20:05 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/23 13:20:13 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>

class AAnimal
{
protected:
	std::string type;

private:
	
public:
	AAnimal();
	AAnimal( AAnimal const & src);
	AAnimal &	operator=( AAnimal const &rhs );
	virtual void	makeSound() const = 0;
	std::string	getType() const;
	virtual ~AAnimal();
};



#endif

