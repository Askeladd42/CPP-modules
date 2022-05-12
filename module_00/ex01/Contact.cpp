/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:19:52 by plam              #+#    #+#             */
/*   Updated: 2022/05/12 16:51:16 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void){
	std::cout << "Contact added to the phonebook." << std::endl;
	return;
}

Contact::~Contact(void){
	std::cout << "Contact " << Contact::Nickname 
		<< " deleted from the phonebook." << std::endl;
	return;
}

void	Contact::SetPhoneNumber(void)
{
	std::cout << "Put the contact's phone number : ";
	std::getline(std::cin, Contact::PhoneNumber);
	return;
}

void	Contact::SetFirstName(void)
{
	std::cout << "Put the contact's first name : ";
	std::getline(std::cin, Contact::FirstName);
	return;
}

void	Contact::SetLastName(void)
{
	std::cout << "Put the contact's last name : ";
	std::getline(std::cin, Contact::LastName);
	return;
}

void	Contact::SetNickname(void)
{
	std::cout << "Put the contact's nickname : ";
	std::getline(std::cin, Contact::Nickname);
	return;	
}

void	Contact::SetDarkestSecret(void)
{
	std::cout << "Put the contact's darkest secret : ";
	std::getline(std::cin, Contact::_darkestSecret);
	return;
}

std::string	Contact::GetPhoneNumber(void) const {
	return (this->PhoneNumber);
}

std::string	Contact::GetFirstName(void) const {
	return (this->FirstName);
}

std::string	Contact::GetLastName(void) const {
	return (this->LastName);
}

std::string	Contact::GetNickname(void) const {
	return (this->Nickname);
}

std::string	Contact::_getDarkestSecret(void) const {
	return (this->_darkestSecret);
}
