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
	std::cout << "Default Constructor called" << std::endl;

	return;
}

Fixed::Fixed( int const nb_int ) : _nb( nb_int <<  _nb_fract)
{
	std::cout << "Int Constructor called" << std::endl;

	return;
}

Fixed::Fixed( float const nb_fl ) : _nb(roundf(nb_fl * (1 << _nb_fract)))
{
	std::cout << "Float constructor called" << std::endl;
	
	return;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
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
	std::cout << "Copy assignment operator called" << std::endl;

	if ( this != &rhs )
		this->_nb = rhs.getRawBits();
	return *this;
}

std::ostream &		operator<< ( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}