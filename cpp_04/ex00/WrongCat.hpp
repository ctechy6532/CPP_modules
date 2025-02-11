/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:12:36 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/22 15:12:38 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	
public:
	WrongCat();
	WrongCat( WrongCat const & src);
	WrongCat &	operator=( WrongCat const &rhs );
	void	makeSound() const;
	~WrongCat();
};

#endif