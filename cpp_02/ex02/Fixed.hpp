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
#include <cmath>

class Fixed
{
private:
	int	_nb;
	static const int _nb_fract = 8;
public:
	Fixed( void );
	Fixed( int const nb_int );
	Fixed( float const nb_fl );
	Fixed( Fixed const & src);
	~Fixed( void );

	Fixed &	operator=( Fixed const & rhs);
	int	getRawBits( void ) const;
	void	setRawBits( int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;

	/*Comparaison operator*/
	bool	operator==( Fixed const & rhs) const;
	bool	operator!=( Fixed const & rhs) const;
	bool	operator<=( Fixed const & rhs) const;
	bool	operator>=( Fixed const & rhs) const;
	bool	operator<( Fixed const & rhs) const;
	bool	operator>( Fixed const & rhs) const;

	/*Arithmetiques operator*/
	Fixed	operator+( Fixed const & rhs);
	Fixed	operator-( Fixed const & rhs);
	Fixed	operator*( Fixed const & rhs);
	Fixed	operator/( Fixed const & rhs);

	/*Incrementation and decrementation operator postfix*/
	Fixed	operator++(int);
	Fixed	operator--(int);

	/*Incrementation and decrementation operator prefix*/
	Fixed&	operator++();
	Fixed&	operator--();

	/*Static min and max const*/
	static Fixed	min( Fixed const & rhs1, Fixed const & rhs2 );
	static Fixed	max( Fixed const & rhs1, Fixed const & rhs2 );

	/*Static min and max*/
	static Fixed	min( Fixed & rhs1, Fixed & rhs2 );
	static Fixed	max( Fixed & rhs1, Fixed & rhs2 );
};

std::ostream &		operator<< ( std::ostream & o, Fixed const & i );

#endif
