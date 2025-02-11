/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:24:42 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/16 16:24:43 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HARL_CPP
#define HARL_CPP
#include <iostream>

class Harl
{
private:
	void error( void );
	void warning( void );
	void info( void );
	void debug( void );
public:
	Harl();
	~Harl();
	
	void complain( std::string level );
};


#endif

