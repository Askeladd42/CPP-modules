/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:04:15 by plam              #+#    #+#             */
/*   Updated: 2022/05/05 14:37:52 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string	cmd;

	while (cmd != "EXIT")
	{
		std::cout << "Enter a command for the Phonebook : ";
		std::cin >> cmd;
		std::cout << "You entered the command " << cmd << '\n';
	}
}