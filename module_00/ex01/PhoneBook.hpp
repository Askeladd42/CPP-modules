/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:04:43 by plam              #+#    #+#             */
/*   Updated: 2022/05/05 16:19:24 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class PhoneBook
{
	Contact	table[8];
public:
	PhoneBook(/* args */);
	~PhoneBook();
};

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}


class Contact
{
	std::string	name;
public:
	Contact(/* args */);
	~Contact();
};

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}
