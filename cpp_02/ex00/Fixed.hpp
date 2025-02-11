/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:18:09 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/17 13:18:11 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	_nb;
	static const int _nb_fract = 8;
public:
	Fixed( void );
	Fixed( Fixed const & src);
	~Fixed( void );

	Fixed &	operator=( Fixed const & rhs);
	int	getRawBits( void ) const;
	void	setRawBits( int const raw);
};

#endif
