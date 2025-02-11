/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:18:22 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/17 13:18:23 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _nb( 0 )
{
	return;
}

Fixed::Fixed( int const nb_int ) : _nb( nb_int <<  _nb_fract)
{
	return;
}

Fixed::Fixed( float const nb_fl ) : _nb(roundf(nb_fl * (1 << _nb_fract)))
{
	return;
}

Fixed::Fixed( Fixed const & src )
{
	*this = src;

	return;
}

float	Fixed::toFloat( void ) const
{
	return ((float)_nb / (1 << _nb_fract));
}

int		Fixed::toInt ( void ) const
{
	return (_nb >> _nb_fract);
}

int		Fixed::getRawBits( void ) const
{
	return this->_nb;
}

void	Fixed::setRawBits( int const raw)
{
	_nb = raw;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	if ( this != &rhs )
		this->_nb = rhs.getRawBits();
	return *this;
}

std::ostream &		operator<< ( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}

bool	Fixed::operator==( Fixed const & rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

bool	Fixed::operator!=( Fixed const & rhs) const
{
	return (this->toFloat() != rhs.toFloat());
}

bool	Fixed::operator<=( Fixed const & rhs) const
{
	return (this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator>=( Fixed const & rhs) const
{
	return (this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator<( Fixed const & rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator>( Fixed const & rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}

Fixed	Fixed::operator+( Fixed const & rhs)
{
	return Fixed( this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-( Fixed const & rhs)
{
	return Fixed( this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*( Fixed const & rhs)
{
	return Fixed( this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/( Fixed const & rhs)
{
	return Fixed( this->toFloat() / rhs.toFloat());
}

/*Postfix increment*/
Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	_nb++;
	return temp;
}
/*Prefix increment*/
Fixed&	Fixed::operator++()
{
	this->_nb++;
	return *this;
}
/*Postfix increment*/
Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	_nb--;
	return temp;
}
/*Prefix increment*/
Fixed&	Fixed::operator--()
{
	this->_nb--;
	return *this;
}

Fixed	Fixed::min( Fixed const & rhs1, Fixed const & rhs2 )
{
	if (rhs1 > rhs2)
		return rhs2;
	return rhs1;
}

Fixed	Fixed::max( Fixed const & rhs1, Fixed const & rhs2 )
{
	if (rhs1 > rhs2)
		return rhs1;
	return rhs2;
}

Fixed	Fixed::min( Fixed & rhs1, Fixed & rhs2 )
{
	if (rhs1 > rhs2)
		return rhs2;
	return rhs1;
}

Fixed	Fixed::max( Fixed & rhs1, Fixed & rhs2 )
{
	if (rhs1 > rhs2)
		return rhs2;
	return rhs1;
}
Fixed::~Fixed()
{
}