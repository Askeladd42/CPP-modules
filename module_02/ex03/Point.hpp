/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:52:35 by plam              #+#    #+#             */
/*   Updated: 2022/06/09 01:03:32 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
# define __POINT_HPP__

# include "Fixed.hpp"

class Point
{
private:
	Fixed	_x;
	Fixed	_y;

public:
	Point( void );
	Point( float const x1, float const y1 );
	Point( Point const &point );
	Point& operator=( Point const &point );
	~Point( void );
};

#endif