/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:35:25 by plam              #+#    #+#             */
/*   Updated: 2022/10/06 12:56:27 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int	main( void ) {
	int	intLst[] = {321, 42, -354654, 214748647, 0, 84};
	std::list<int>					testLst(intLst, intLst+6);
	std::list<int>::iterator		finderLst;

	std::cout << "testLst = {";
	for (finderLst = testLst.begin(); finderLst != testLst.end(); ++finderLst) {
		std::cout << *finderLst << ", ";
	}
	std::cout << *finderLst << "};" << std::endl;

	finderLst = ::easyfind(testLst, 210);
	if	(finderLst != testLst.end())
		std::cout << *finderLst << std::endl;
	else
		std::cout << "No occurences of the searched value found in testLst" << std::endl;
	
	//std::array<int, 4>				testArray = {48, -2147483648, 56231354, -0};
	//std::array<int, 1>::iterator	finderArray;
//
	//for (finderArray = testArray.begin(); finderArray != testArray.end(); ++finderArray) {
	//	std::cout << *finderArray << ", ";
	//}
	//std::cout << *finderArray << std::endl;
//
	//finderArray = easyfind(testArray, 0);
	//if	(finderLst != testLst.end())
	//	std::cout << *finderLst << std::endl;
	//else
	//	std::cout << "No occurences of the searched value found in testArray" << std::endl;

//
	//std::vector<int>				testVect = {48, -6413, 5432583, -0};
	//std::vector<int>::iterator		finderVect;
//
	//for (finderVect = testVect.begin(); finderVect != testVect.end(); ++finderVect) {
	//	std::cout << *finderVect << ", ";
	//}
	//std::cout << *finderVect << std::endl;
//
	//finderVect = easyfind(testVect, 0);
	//if	(finderLst != testLst.end())
	//	std::cout << *finderLst << std::endl;
	//else
	//	std::cout << "No occurences of the searched value found in testVect" << std::endl;

	return 0;
}