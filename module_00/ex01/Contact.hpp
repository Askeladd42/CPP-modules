/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:21:19 by plam              #+#    #+#             */
/*   Updated: 2022/08/20 21:57:55 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__

# include <iostream>
# include <string>

class Contact
{
private:
	std::string	PhoneNumber;
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	_darkestSecret;
	std::string	_getDarkestSecret(void) const;
	
public:
	Contact(void);
	~Contact(void);
	
	void		SetPhoneNumber(void);
	std::string	GetPhoneNumber(void) const;
	
	void		SetFirstName(void);
	std::string	GetFirstName(void) const;
	
	void		SetLastName(void);
	std::string	GetLastName(void) const;
	
	void		SetNickname(void);
	std::string	GetNickname(void) const;

	void		SetDarkestSecret(void);
};

#endif
