/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:21:19 by plam              #+#    #+#             */
/*   Updated: 2022/05/10 00:26:38 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iomanip>
# include <string>

class Contact
{
private:
	std::string	DarkestSecret;
public:
	Contact(void);
	~Contact(void);
	std::string	PhoneNumber;
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
};

#endif
