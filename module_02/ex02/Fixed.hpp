/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:32:08 by plam              #+#    #+#             */
/*   Updated: 2022/06/08 23:08:59 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_raw;
	static int const	_bits = 8;

public:
	Fixed( void );
	Fixed( int const nb );
	Fixed( float const nb );
	~Fixed( void );

	Fixed( Fixed const &task );
	Fixed& operator=( Fixed const &task );

	bool				operator>( Fixed const &nb ) const;
	bool				operator<( Fixed const &nb ) const;
	bool				operator>=( Fixed const &nb ) const;
	bool				operator<=( Fixed const &nb ) const;
	bool				operator==( Fixed const &nb ) const;
	bool				operator!=( Fixed const &nb ) const;
	Fixed				operator+( Fixed const &rhs ) const;
	Fixed				operator-( Fixed const &rhs ) const;
	Fixed				operator*( Fixed const &rhs ) const;
	Fixed				operator/( Fixed const &rhs ) const;

	Fixed				operator++( void );
	Fixed				operator++( int );
	Fixed				operator--( void );
	Fixed				operator--( int );

	int					toInt( void ) const;
	float				toFloat( void ) const;
	int					getRawBits( void ) const;
	void				setRawBits( int const raw );

	static Fixed		&min( Fixed &nb1, Fixed &nb2 );
	static Fixed		&max( Fixed &nb1, Fixed &nb2 );
	static Fixed const	&min( Fixed const &nb1, Fixed const &nb2 );
	static Fixed const	&max( Fixed const &nb1, Fixed const &nb2 );
};

std::ostream&	operator<<( std::ostream &ost, Fixed const &nb );

#endif