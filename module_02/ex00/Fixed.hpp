/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:32:08 by plam              #+#    #+#             */
/*   Updated: 2022/06/02 15:20:49 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>

class Fixed
{
private:
	int					n;
	static int const	rawBits = 8;

public:
	Fixed( void );
	Fixed( const Fixed&);
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits(int const raw );
};

#endif