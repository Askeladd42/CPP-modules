/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:32:08 by plam              #+#    #+#             */
/*   Updated: 2022/06/08 13:21:04 by plam             ###   ########.fr       */
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

	int		toInt( void ) const;
	float	toFloat( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits(int const raw );
};

#endif