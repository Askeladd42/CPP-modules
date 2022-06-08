/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:51:53 by plam              #+#    #+#             */
/*   Updated: 2022/06/09 01:09:37 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) { }

Point::Point( float const x1, float const y1 ) : _x(x1), _y(y1) { }

Point::~Point( void ) { }

Point::Point( Point const &point ) {
	*this = point;
}

Point&	Point::operator=( Point const &point ) {
	if (this != &point)
	{
		this->_x = point._x;
		this->_y = point._y;
	}
	return *this;
}