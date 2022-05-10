/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:04:43 by plam              #+#    #+#             */
/*   Updated: 2022/05/10 16:53:48 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <iomanip>

// will use setw from iomanip for the display format later.

class PhoneBook
{
private:
	Contact	_book[8];
public:
	PhoneBook(void);
	~PhoneBook();

	void	ShowAllContacts(void);
	void	ShowContact(int index);
	void	AddContact(int index);
	void	SearchContact(void);

};

#endif