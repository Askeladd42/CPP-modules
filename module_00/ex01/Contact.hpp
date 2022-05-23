/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:21:19 by plam              #+#    #+#             */
/*   Updated: 2022/05/23 14:28:48 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__

# include <iostream>
# include <string>

class Contact
{
private:
	std::string	_darkestSecret;
	std::string	_getDarkestSecret(void) const;
	
public:
	Contact(void);
	~Contact(void);
	
	std::string	PhoneNumber;
	void		SetPhoneNumber(void);
	std::string	GetPhoneNumber(void) const;
	
	std::string	FirstName;
	void		SetFirstName(void);
	std::string	GetFirstName(void) const;
	
	std::string	LastName;
	void		SetLastName(void);
	std::string	GetLastName(void) const;
	
	std::string	Nickname;
	void		SetNickname(void);
	std::string	GetNickname(void) const;

	void		SetDarkestSecret(void);
};

#endif
