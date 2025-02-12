/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:12:50 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/13 15:13:08 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}
std::string Contact::first_name_ret(void)
{
	std::string tmp;
	if (this->_first_name.size() > 10)
	{
		tmp = this->_first_name.substr(0, 9) + ".";
		return (tmp);
	}
    return (this->_first_name);
}

std::string Contact::last_name_ret(void)
{
	std::string tmp;
	if (this->_last_name.size() > 10)
	{
		tmp = this->_last_name.substr(0, 9) + ".";
		return (tmp);
	}
    return (this->_last_name);
}

std::string Contact::nickname_ret(void)
{
	std::string tmp;
	if (this->_nickname.size() > 10)
	{
		tmp = this->_nickname.substr(0, 9) + ".";
		return (tmp);
	}
    return (this->_nickname);
}


void Contact::print_full_contact(void)
{
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}

void	Contact::init_var(std::string a, std::string b, std::string c, std::string d, std::string e)
{
	_first_name = a;
    _last_name = b;
    _nickname = c;
    _phone_number = d;
    _darkest_secret = e;
}