/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:19:52 by plam              #+#    #+#             */
/*   Updated: 2022/05/10 15:53:37 by plam             ###   ########.fr       */
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

void	Contact::SetPhoneNumber(std::string number)
{
	std::cout << "Put the contact's phone number : ";
	std::cin >> Contact::PhoneNumber;
	return;
}

void	Contact::SetFirstName(std::string first)
{
	std::cout << "Put the contact's first name : ";
	std::cin >> Contact::FirstName;
	return;
}

void	Contact::SetLastName(std::string last)
{
	std::cout << "Put the contact's last name : ";
	std::cin >> Contact::LastName;
	return;
}

void	Contact::SetNickname(std::string nick)
{
	std::cout << "Put the contact's nickname : ";
	std::cin >> Contact::Nickname;
	return;	
}

void	Contact::SetDarkestSecret(std::string darkest)
{
	std::cin >> Contact::_darkestSecret;
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
