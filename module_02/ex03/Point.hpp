/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:52:35 by plam              #+#    #+#             */
/*   Updated: 2022/08/29 17:35:55 by plam             ###   ########.fr       */
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

	void	setX( Fixed const &otherX );
	void	setY( Fixed const &otherY );

	Fixed const	getX() const;
	Fixed const	getY() const;
};

#endif