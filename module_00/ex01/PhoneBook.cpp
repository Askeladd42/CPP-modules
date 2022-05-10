/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:04:15 by plam              #+#    #+#             */
/*   Updated: 2022/05/10 16:57:39 by plam             ###   ########.fr       */
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

void	PhoneBook::ShowAllContacts(void)
{

}

void	PhoneBook::ShowContact(int index)
{
	std::cout << this->_book[index].GetPhoneNumber();
	std::cout << this->_book[index].GetFirstName();
	std::cout << this->_book[index].GetLastName();
	std::cout << this->_book[index].GetNickname();
}

void	PhoneBook::AddContact(int index)
{
	Contact	cont;

	cont.SetPhoneNumber();
	cont.SetFirstName();
	cont.SetLastName();
	cont.SetNickname();
	cont.SetDarkestSecret();
	this->_book[index] = cont;
	std::cout << "New contact " << this->*_book[index]->FirstName << " added to the phonebook."
				<< std::endl;
}

/*void	PhoneBook::SearchContact(void)
{
	int	index = 0;

	this->ShowAllContacts();
	std::cout << "Put the contact's index you are looking for : "
	std::cin >> index;
}
*/

int		main(void)
{
	std::string	cmd;
	PhoneBook	book;
	std::string	buff;
	int			index = 0;

	while (cmd != "EXIT")
	{
		std::cout << "Enter a command for the Phonebook (put EXIT to quit the phonebook): ";
		std::cin >> cmd;
		std::cout << "You entered the command " << cmd << '\n';
		if (cmd == "ADD")
			book.AddContact(index % 8);
			index++;
		//if (cmd == "SEARCH")
		//	SearchContact();
	}
}