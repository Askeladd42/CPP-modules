/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:51:53 by plam              #+#    #+#             */
/*   Updated: 2022/08/29 16:00:38 by plam             ###   ########.fr       */
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
		this->set_x(point._x);
		this->set_y(point._y);
	}
	return *this;
}

Fixed	Point::set_x( Fixed const &otherX ) {
	return (otherX);
}

Fixed	Point::set_y( Fixed const &otherY ) {
	return (otherY);
}