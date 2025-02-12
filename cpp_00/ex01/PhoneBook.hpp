/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:39:11 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/13 14:39:13 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
class PhoneBook
{
private:
	std::string _check_empty(std::string str);
	Contact _contact[8];
	std::string _index;
	void _check_index(int i);
	
public:
	PhoneBook();
	~PhoneBook(void);
	void add_input(int i);
	void print_all_contact(int i, bool checker);
	void print_canvas(void);
};

#endif
