/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctechy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:39:03 by ctechy            #+#    #+#             */
/*   Updated: 2023/02/13 14:39:05 by ctechy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
public:
	Contact();
	~Contact(void);
    void    init_var(std::string a, std::string b, std::string c, std::string d, std::string e);
    void    print_full_contact(void);
    std::string first_name_ret(void);
    std::string last_name_ret(void);
    std::string nickname_ret(void);
};

#endif

