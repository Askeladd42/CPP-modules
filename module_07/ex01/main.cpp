/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:44:58 by plam              #+#    #+#             */
/*   Updated: 2022/09/30 16:50:58 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int	main( void ) {
	int			int_tab[] = { -12, 42, -2147483648, 2147483647, 0, -54154655, -13, 1 };
	std::string	str_tab[] = { "Salut !", "C'est Billy !", "On a des problèmes là !" };
	float		float_tab[] = { -42.3f, 27.18f, 145421535453435.75454f, -53435435.3 };
	double		double_tab[] = { 21.42, -5431134565, 45533345334.54245346546 };

	std::cout << "int_tab :" << std::endl;
	iter(int_tab, 8, printCont);
	std::cout << "str_tab :" << std::endl;
	iter(str_tab, 3, printCont);
	std::cout << "float_tab :" << std::endl;
	iter(float_tab, 4, printCont);
	std::cout << "double_tab :" << std::endl;
	iter(double_tab, 3, printCont);

	std::cout << "int_tab tripled:" << std::endl;
	iter(int_tab, 8, printTriple);
	std::cout << "float_tab tripled:" << std::endl;
	iter(float_tab, 8, printTriple);
	std::cout << "double_tab tripled:" << std::endl;
	iter(double_tab, 8, printTriple);

	return 0;
}
