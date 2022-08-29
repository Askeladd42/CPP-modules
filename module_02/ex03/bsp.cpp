/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:54:02 by plam              #+#    #+#             */
/*   Updated: 2022/08/29 17:39:29 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	if ((point.getX() == a.getX() && point.getY() == a.getY())
	|| (point.getX() == b.getX() && point.getY() == b.getY())
	|| (point.getX() == c.getX() && point.getY() == c.getY()))
		return false;
	return true;
}