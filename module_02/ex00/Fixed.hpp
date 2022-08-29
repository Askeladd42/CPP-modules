/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:32:08 by plam              #+#    #+#             */
/*   Updated: 2022/08/29 13:12:25 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>

class Fixed
{
private:
	int					_raw;
	static int const	_bits = 8;

public:
	Fixed( void );
	Fixed( Fixed const &task );
	Fixed& operator=( Fixed const &task );
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif