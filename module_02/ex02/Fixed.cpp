/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:33:21 by plam              #+#    #+#             */
/*   Updated: 2022/06/08 16:41:46 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) {
	this->_raw = 0;
	std::cout << "Default constructor called" << std::endl;
}

int		Fixed::toInt( void ) const {
	return this->_raw >> this->_bits;
}

float	Fixed::toFloat( void ) const {
	return ((double)this->_raw / (double)(1 << this->_bits));
}

Fixed::Fixed( int const nb ) {
	this->_raw = nb << this->_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const nb ) {
	this->_raw = roundf(nb * (1 << this->_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const &task ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = task;
}

Fixed& Fixed::operator=( Fixed const &task ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &task)
		this->_raw = task.getRawBits();
	return *this;
}

Fixed Fixed::operator+( Fixed const &rhs ) const {
	return (this->_raw + rhs.getRawBits());
}

Fixed Fixed::operator-( Fixed const &rhs ) const {
	return (this->_raw - rhs.getRawBits());
}

Fixed Fixed::operator*( Fixed const &rhs ) const {
	return (this->_raw * rhs.getRawBits());
}

Fixed Fixed::operator/( Fixed const &rhs ) const {
	return (this->_raw / rhs.getRawBits());
}


int		Fixed::getRawBits( void ) const {
	return this->_raw;
}

void	Fixed::setRawBits( int const raw ) {
	this->_raw = raw;
}

std::ostream&	operator<<( std::ostream &ost, Fixed const &nb ) {
	if (nb.getRawBits() == 0)
		ost << nb.toInt();
	else
		ost << nb.toFloat();
	return ost;
}