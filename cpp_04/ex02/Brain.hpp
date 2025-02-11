/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:29:44 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/22 17:29:45 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string	_ideas[100];
public:
	Brain();
	Brain( Brain const & src);
	~Brain();

	Brain &	operator=( Brain const & rhs );
};


#endif
