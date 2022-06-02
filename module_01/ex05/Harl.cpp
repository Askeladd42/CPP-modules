/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:37:53 by plam              #+#    #+#             */
/*   Updated: 2022/06/02 12:17:17 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
	this->log[0] = "DEBUG";
	this->log[1] = "INFO";
	this->log[2] = "WARNING";
	this->log[3] = "ERROR";
	std::cout << "Hello sir, how can I help you ?" << std::endl;
}

Harl::~Harl( void ) {
	std::cout << "Goodbye, Mr Harl, hope to see you soon." << std::endl;
}

void	Harl::_debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::_info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level ) {

	int i;
	
	for (i = 0; i < 4; i++)
	{
		if (level.compare(this->log[i]) == 0)
			break;
	}
	switch (i)
	{
	case 0:
		this->_debug();
		break;
	case 1:
		this->_info();
		break;
	case 2:
		this->_warning();
		break;
	case 3:
		this->_error();
		break;
	default:
		std::cout << "Screeching inaudible noises" << std::endl;
		break;
	}
}