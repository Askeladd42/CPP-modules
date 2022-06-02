/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:33:21 by plam              #+#    #+#             */
/*   Updated: 2022/06/02 15:23:01 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) {
	this->n = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed&) {
	std::cout << "Copy constructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->rawBits;
}

void	Fixed::setRawBits( int const raw ) {
	this->n = raw;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}
