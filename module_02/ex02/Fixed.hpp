/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:32:08 by plam              #+#    #+#             */
/*   Updated: 2022/06/08 16:37:20 by plam             ###   ########.fr       */
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
	
	Fixed& operator>( Fixed const &nb );
	Fixed& operator<( Fixed const &nb );
	Fixed& operator>=( Fixed const &nb );
	Fixed& operator<=( Fixed const &nb );
	Fixed& operator==( Fixed const &nb );
	Fixed& operator!=( Fixed const &nb );

	Fixed operator+( Fixed const &rhs ) const;
	Fixed operator-( Fixed const &rhs ) const;
	Fixed operator*( Fixed const &rhs ) const;
	Fixed operator/( Fixed const &rhs ) const;

	int				toInt( void ) const;
	float			toFloat( void ) const;
	int				getRawBits( void ) const;
	void			setRawBits( int const raw );
};

std::ostream&	operator<<( std::ostream &obj, Fixed const &nb );

#endif