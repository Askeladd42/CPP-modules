/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:19:52 by plam              #+#    #+#             */
/*   Updated: 2022/05/10 15:02:49 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void){
	std::cout << "Contact added to the phonebook." << std::endl;
	this->SetPhoneNumber(number);
	this->SetLastName();
	this->SetNickname();
	this->SetPhoneNumber();
	this->SetDarkestSecret();
	return;
}

Contact::~Contact(void){
	std::cout << "Contact deleted from the phonebook." << std::endl;
	return;
}

void	SetPhoneNumber(std::string number)
{
	std::cout << "Put the contact's phone number : ";
	std::cin >> Contact::PhoneNumber;
	return;
}

void	SetFirstName(std::string first)
{
	std::cout << "Put the contact's first name : ";
	std::cin >> Contact::FirstName;
	return;
}

void	SetLastName(std::string last)
{
	std::cout << "Put the contact's last name : ";
	std::cin >> Contact::LastName;
	return;
}

void	SetNickname(std::string nick)
{
	std::cout << "Put the contact's nickname : ";
	std::cin >> Contact::Nickname;
	return;	
}

void	SetDarkestSecret(std::string darkest)
{
	std::cout << "Put the contact's darkest secret : ";
	std::cin >> Contact::_darkestSecret;
	return;
}
