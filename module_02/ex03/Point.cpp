/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:51:53 by plam              #+#    #+#             */
/*   Updated: 2022/08/29 17:28:54 by plam             ###   ########.fr       */
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
	if (this != &point) {
		this->setX(point._x);
		this->setY(point._y);
	}
	return *this;
}

void	Point::setX( Fixed const &otherX ) : _x(otherX) { }

void	Point::setY( Fixed const &otherY ) : _y(otherY) { }

Fixed const	Point::getX() {
	return _x;
}

Fixed const	Point::getY() {
	return _y;
}