/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:12:49 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/22 15:12:50 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
protected:
	std::string type;

private:
	
public:
	WrongAnimal();
	WrongAnimal( WrongAnimal const & src);
	WrongAnimal &	operator=( WrongAnimal const &rhs );
	void	makeSound() const;
	std::string	getType() const;
	~WrongAnimal();
};

#endif

