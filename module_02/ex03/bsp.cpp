/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:54:02 by plam              #+#    #+#             */
/*   Updated: 2022/08/29 18:41:22 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	range( Point const &a, Point &b ) {
	Fixed	x = a.getX() - b.getX();
	Fixed	y = a.getY() - b.getY();

	return (sqrt((x*x) + (y*y)));
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	if ((point.getX() == a.getX() && point.getY() == a.getY())
	|| (point.getX() == b.getX() && point.getY() == b.getY())
	|| (point.getX() == c.getX() && point.getY() == c.getY()))	// temporary : until range between points function is made
		return false;
	
	return true;
}