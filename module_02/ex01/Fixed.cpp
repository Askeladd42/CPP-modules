/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:33:21 by plam              #+#    #+#             */
/*   Updated: 2022/06/07 17:02:23 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) {
	this->_raw = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const nb ) {
	this->setRawBits( nb );
}

Fixed::Fixed( float const nb ) {
	this->_raw = nb;
}

Fixed::Fixed( Fixed const &task ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = task;
}

Fixed& Fixed::operator=( Fixed const &task) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &task)
		this->_raw = task.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}
