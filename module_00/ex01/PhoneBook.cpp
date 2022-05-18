/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:04:15 by plam              #+#    #+#             */
/*   Updated: 2022/05/18 14:58:22 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	std::cout << "Phonebook created." << std::endl;
	return;
}

PhoneBook::~PhoneBook(void){
	std::cout << "PhoneBook destroyed. All contacts in it are lost !" << std::endl;
	return;
}

std::string	str_resizing(std::string str)
{
	std::string	ret = str;
	if (str.size() > 10)
	{
		ret = str.substr(0, 10);
		ret[9] = '.';
	}
	return (ret);
}

void	PhoneBook::ShowAllContacts(int ContactNbr)
{
	int	i = 0;
	
	std::cout << std::endl << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "nickname" << "|" << std::endl;
	while (i < ContactNbr)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << str_resizing(this->_book[i].FirstName);
		std::cout << "|" << std::setw(10) << str_resizing(this->_book[i].LastName);
		std::cout << "|" << std::setw(10) << str_resizing(this->_book[i].Nickname) << "|" << std::endl;
		i++;
	}
	std::cout << std::endl;
}

void	PhoneBook::ShowContact(int index)
{
	std::cout << "Phone number : " << this->_book[index].GetPhoneNumber() << std::endl;
	std::cout << "First name : " << this->_book[index].GetFirstName() << std::endl;
	std::cout << "Last name : " << this->_book[index].GetLastName() << std::endl;
	std::cout << "Nickname : " << this->_book[index].GetNickname() << std::endl;
}

void	PhoneBook::AddContact(Contact *cont)
{
	cont->SetPhoneNumber();
	cont->SetFirstName();
	cont->SetLastName();
	cont->SetNickname();
	cont->SetDarkestSecret();
	std::cout << "New contact " << cont->FirstName << " added to the phonebook."
				<< std::endl;
}

void	PhoneBook::SearchContact(void)
{
	long		i = 0;
	std::string	cmd;

	std::cout << "Put the contact's index you are looking for : ";
	std::getline(std::cin, cmd);
	i = std::strtol(cmd.data(), NULL, 10);
	if (!(i >= 1 && i <= 8))
		std::cout << "Wrong index number sent. Please enter a correct index number."
				<< std::endl;
	else
		this->ShowContact(i - 1);
}

int		main(void)
{
	std::string	cmd;
	PhoneBook	book;
	std::string	buff;
	int			index = 0;

	while (cmd != "EXIT")
	{
		if (cmd != "ADD" && cmd != "SEARCH")
			std::cout << "Enter a command for the Phonebook (put EXIT to quit the phonebook): ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			if (index >= 8)
				std::cout << "Phonebook list is full, we will erase the oldest contact in" 
					<< " the list to add the newer." << std::endl;
			book.AddContact(&book._book[(index % 8)]);
			index++;
			std::cout << std::endl << "(Press Enter to continue.)";
		}
		if (cmd == "SEARCH")
		{
			if (index > 7)
				book.ShowAllContacts(7);
			else
				book.ShowAllContacts(index);
			book.SearchContact();
			std::cout << std::endl << "(Press Enter to continue.)";
		}
	}
}
