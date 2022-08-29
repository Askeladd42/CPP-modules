/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:33:21 by plam              #+#    #+#             */
/*   Updated: 2022/08/29 14:00:46 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) {
	this->_raw = 0;
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const nb ) {
	this->_raw = nb << this->_bits;
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const nb ) {
	this->_raw = roundf(nb * (1 << this->_bits));
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed( void ) {
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const &task ) {
	//std::cout << "Copy constructor called" << std::endl;
	*this = task;
}

Fixed& Fixed::operator=( Fixed const &task ) {
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &task)
		this->_raw = task.getRawBits();
	return *this;
}

int		Fixed::toInt( void ) const {
	return this->_raw >> this->_bits;
}

float	Fixed::toFloat( void ) const {
	return ((double)this->_raw / (double)(1 << this->_bits));
}

int		Fixed::getRawBits( void ) const {
	return this->_raw;
}

void	Fixed::setRawBits( int const raw ) {
	this->_raw = raw;
}

// Comparison Operator functions

bool	Fixed::operator<( Fixed const &nb ) const {
	return (this->getRawBits() < nb.getRawBits());
}

bool	Fixed::operator>( Fixed const &nb ) const {
	return (this->getRawBits() > nb.getRawBits());
}

bool	Fixed::operator<=( Fixed const &nb ) const {
	return (this->getRawBits() <= nb.getRawBits());
}

bool	Fixed::operator>=( Fixed const &nb ) const {
	return (this->getRawBits() >= nb.getRawBits());
}

bool	Fixed::operator==( Fixed const &nb ) const {
	return (this->getRawBits() == nb.getRawBits());
}

bool	Fixed::operator!=( Fixed const &nb ) const {
	return !(this->getRawBits() == nb.getRawBits());
}

// Arithmetic Operator functions

Fixed Fixed::operator+( Fixed const &rhs ) const {
	Fixed	nb;

	nb.setRawBits(this->_raw + rhs.getRawBits());
	return nb;
}

Fixed Fixed::operator-( Fixed const &rhs ) const {
	Fixed	nb;

	nb.setRawBits(this->_raw - rhs.getRawBits());
	return nb;
}

Fixed Fixed::operator*( Fixed const &rhs ) const {
	Fixed	nb;

	nb.setRawBits((this->_raw * rhs.getRawBits()) >> this->_bits);
	return nb;
}

Fixed Fixed::operator/( Fixed const &rhs ) const {
	Fixed	nb;

	nb.setRawBits((this->_raw << this->_bits) / rhs.getRawBits());
	return nb;
}

// Incrementation/decrementation operator functions

Fixed Fixed::operator++( void ) {
	Fixed	nb;

	nb.setRawBits(++this->_raw);
	return nb;
}

Fixed Fixed::operator++( int ) {
	Fixed	nb;

	nb.setRawBits(this->_raw++);
	return nb;
}

Fixed Fixed::operator--( void ) {
	Fixed	nb;

	nb.setRawBits(--this->_raw);
	return nb;
}

Fixed Fixed::operator--( int ) {
	Fixed	nb;

	nb.setRawBits(this->_raw--);
	return nb;
}

// Min/Max member functions

Fixed		&Fixed::min( Fixed &nb1, Fixed &nb2 ) {
	if (nb1 > nb2)
		return nb2;
	return nb1;
}

Fixed		&Fixed::max( Fixed &nb1, Fixed &nb2 ) {
	if (nb1 < nb2)
		return nb2;
	return nb1;
}

Fixed const	&Fixed::min( Fixed const &nb1, Fixed const &nb2 ) {
	if (nb1 > nb2)
		return nb2;
	return nb1;
}

Fixed const	&Fixed::max( Fixed const &nb1, Fixed const &nb2 ) {
	if (nb1 < nb2)
		return nb2;
	return nb1;
}

std::ostream&	operator<<( std::ostream &ost, Fixed const &nb ) {
	if (nb.getRawBits() == 0)
		ost << nb.toInt();
	else
		ost << nb.toFloat();
	return ost;
}