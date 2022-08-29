/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:54:02 by plam              #+#    #+#             */
/*   Updated: 2022/08/29 19:14:30 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

long double	range( Point const &a, Point const &b ) {
	Fixed	x = a.getX() - b.getX();
	Fixed	y = a.getY() - b.getY();
	float	sqX = (x*x).toFloat();
	float	sqY = (y*y).toFloat();

	return (sqrt(sqX + sqY));
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	if (range(point, a) == 0.0 || range(point, b) == 0.0 || range(point, c) == 0.0)
		return false;
	return true;
}