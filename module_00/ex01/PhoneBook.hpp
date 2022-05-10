/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:04:43 by plam              #+#    #+#             */
/*   Updated: 2022/05/10 15:05:50 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <Contact.hpp>
#include <iostream>

class PhoneBook
{
private:
	Contact	book[8];
public:
	PhoneBook(void);
	~PhoneBook();

	void	AddContact(void);
};

#endif