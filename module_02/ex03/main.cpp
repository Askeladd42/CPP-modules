/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:31:38 by plam              #+#    #+#             */
/*   Updated: 2022/09/01 13:47:17 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int	main( void ) {
	Point *a, *b, *c;
	Point *point;

	a = new Point(12.5, 2.6);
	b = new Point(-3.2, 4.35);
	c = new Point(-7.8, 9.7);

	point = new Point(10.4, 5.1);

	if (bsp(a, b, c,point) == true)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
	delete a;
	delete b;
	delete a;
	delete point;
	return 0;
}
