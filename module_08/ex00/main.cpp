/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:35:25 by plam              #+#    #+#             */
/*   Updated: 2022/10/05 17:54:21 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int	main( void ) {
	int	intLst[] = {321, 42, -354654, 214748647, 0, 84};
	std::list<int>				testLst(intLst, intLst+6);
	std::list<int>::iterator	finder;

	std::cout << "testLst = {";
	for (finder = testLst.begin(); finder != testLst.end(); ++finder) {
		std::cout << *finder << ", ";
	}
	std::cout << *finder << "};" << std::endl;

	//finder = easyfind(testLst, 210);
	return 0;
}