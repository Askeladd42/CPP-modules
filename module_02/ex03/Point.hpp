/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:52:35 by plam              #+#    #+#             */
/*   Updated: 2022/08/29 15:58:14 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
# define __POINT_HPP__

# include "Fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;

public:
	Point( void );
	Point( float const x1, float const y1 );
	Point( Point const &point );
	Point& operator=( Point const &point );
	~Point( void );

	Fixed	set_x( Fixed const &otherX );
	Fixed	set_y( Fixed const &otherY );

	void	get_x();
	void	get_y();
};

#endif