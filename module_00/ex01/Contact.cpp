/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:19:52 by plam              #+#    #+#             */
/*   Updated: 2022/05/10 00:50:57 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void){
	std::cout << "Contact added to the phonebook." << std::endl;
	this->GetFirstName();
	this->GetLastName();
	this->GetNickname();
	this->GetPhoneNumber();
	this->GetDarkestSecret();
	return;
}

Contact::~Contact(void){
	std::cout << "Contact deleted from the phonebook." << std::endl;
	return;
}

int	GetPhoneNumber(void)
{
	std::cout << "Put the contact's phone number : ";
	std::cin >> Contact::PhoneNumber;
	return (0);
}

int	GetFirstName(Contact cont)
{
	
}

int	GetLastName(Contact cont)
{

}

int	GetNickname(Contact cont)
{
	
}
