/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:04:43 by plam              #+#    #+#             */
/*   Updated: 2022/05/23 14:29:04 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

# include "Contact.hpp"
# include <iomanip>
# include <cstdlib>

// will use setw from iomanip for the display format later.

class PhoneBook
{
private:
public:
	PhoneBook(void);
	~PhoneBook();

	Contact	_book[8];
	void	ShowAllContacts(int ContactNbr);
	void	ShowContact(int index);
	void	AddContact(Contact *cont);
	void	SearchContact(void);

};

#endif