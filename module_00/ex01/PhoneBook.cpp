/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:04:15 by plam              #+#    #+#             */
/*   Updated: 2022/05/10 15:39:25 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	std::cout << "PhoneBook created." << std::endl;
	return;
}

PhoneBook::~PhoneBook(void){
	std::cout << "PhoneBook destroyed. All contacts in it are lost !" << std::endl;
	return;
}

//void	AddContact(class Phonebook)
//{
//	Contact	cont;
//
//	std::cout << "Enter the new contact's name : ";
//	getline(std::cin, contact);
//}

int		main()
{
	std::string	cmd;
	//class		Phonebook;

	while (cmd != "EXIT")
	{
		std::cout << "Enter a command for the Phonebook (put EXIT to quit the phonebook): ";
		std::cin >> cmd;
		std::cout << "You entered the command " << cmd << '\n';
		//if (cmd == "ADD")
		//	AddContact(PhoneBook);
		//if (cmd == "SEARCH")
		//	SearchContact(PhoneBook);
	}
}