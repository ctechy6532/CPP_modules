/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:08:24 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/13 15:08:26 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}
void	PhoneBook::print_canvas(void)
{
	std::cout << "|" << std::setw(10);
	std::cout << "Index";
	std::cout << "|" << std::setw(10);
	std::cout << "First Name";
	std::cout << "|" << std::setw(10);
	std::cout << "Last Name";
	std::cout << "|" << std::setw(10);
	std::cout << "Nickname";
	std::cout << "|" << std::endl;
}
void PhoneBook::_check_index(int i)
{
	std::cout << "\tEnter a index with no space to see full contact" << std::endl;
	std::getline(std::cin, _index);
	while (_index < "0" || _index > "7")
	{
		std::cout << "the index is incorrect, need to be between 0 and 7" << std::endl;
		std::cout << "\tEnter a index with no space to see full contact" << std::endl;
		std::getline(std::cin, _index);
	}
	if (stoi(_index) > i - 1)
		std::cout << "the index doesn't exist" << std::endl;
	else
		_contact[stoi(_index)].print_full_contact();
}

void PhoneBook::print_all_contact(int i, bool checker)
{
	if (checker == true)
		i = 8;
	for (int j = 0; j < i; j++)
	{
		std::cout << "|" << std::setw(10) << j;
		std::cout << "|" << std::setw(10);
        std::cout << _contact[j].first_name_ret();
		std::cout << "|" << std::setw(10);
		std::cout << _contact[j].last_name_ret();
		std::cout << "|" << std::setw(10);
		std::cout << _contact[j].nickname_ret();
        std::cout << "|" << std::endl;
	}
	_check_index(i);
}

std::string PhoneBook::_check_empty(std::string str)
{
	while (str.size() == 0)
	{
		std::cout << "You need to put something: ";
		std::getline(std::cin, str);
	}
	return (str);
}

void PhoneBook::add_input(int i)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "Enter the first name: ";
	std::getline(std::cin, first_name);
	first_name = _check_empty(first_name);
	std::cout << "Enter the last name: ";
	std::getline(std::cin, last_name);
	last_name = _check_empty(last_name);
	std::cout << "Enter the nickname: ";
	std::getline(std::cin, nickname);
	nickname = _check_empty(nickname);
	std::cout << "Enter the phone number: ";
	std::getline(std::cin, phone_number);
	phone_number = _check_empty(phone_number);
	std::cout << "Enter the darkest secret: ";
	std::getline(std::cin, darkest_secret);
	darkest_secret = _check_empty(darkest_secret);
	_contact[i].init_var(first_name, last_name, nickname, phone_number, darkest_secret);
}