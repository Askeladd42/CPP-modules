/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:35:25 by plam              #+#    #+#             */
/*   Updated: 2022/10/14 13:59:55 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int	main( void ) {
	int	intLst[] = {321, 42, -354654, 214748647, 0, 84};
	std::list<int>					testLst(intLst, intLst+6);
	std::list<int>::iterator		finderLst;

	std::cout << "######## Test with list container ########" << std::endl << "testLst = {";
	for (finderLst = testLst.begin(); finderLst != testLst.end(); ++finderLst) {
		if (finderLst != testLst.begin())
			std::cout << ", ";
		std::cout << *finderLst;
	}
	std::cout << "};" << std::endl;

	std::cout << "test #1 : find 210 :" << std::endl;
	finderLst = easyfind(testLst, 210);
	if	(finderLst != testLst.end())
		std::cout << *finderLst << std::endl;
	else
		std::cout << "No occurences of the searched value found in testLst" << std::endl;

	std::cout << "test #2 : find 42 :" << std::endl;
	finderLst = easyfind(testLst, 42);
	if	(finderLst != testLst.end())
		std::cout << *finderLst << std::endl;
	else
		std::cout << "No occurences of the searched value found in testLst" << std::endl;

	std::cout << std::endl;

	std::vector<int>				testVect(intLst, intLst+6);
	std::vector<int>::iterator		finderVect;

	std::cout << "######## Test with vector container ########" << std::endl << "testVect = {";
	for (finderVect = testVect.begin(); finderVect != testVect.end(); ++finderVect) {
		if (finderVect != testVect.begin())
			std::cout << ", ";
		std::cout << *finderVect;
	}
	std::cout << "};" << std::endl;

	std::cout << "test #1 : find 0 :" << std::endl;
	finderVect = easyfind(testVect, 0);
	if	(finderVect != testVect.end())
		std::cout << *finderVect << std::endl;
	else
		std::cout << "No occurences of the searched value found in testVect" << std::endl;

	std::cout << "test #2 : find -42 :" << std::endl;
	finderVect = easyfind(testVect, -42);
	if	(finderVect != testVect.end())
		std::cout << *finderVect << std::endl;
	else
		std::cout << "No occurences of the searched value found in testVect" << std::endl;

	//std::array<int, 4>				testArray = {48, -2147483648, 56231354, -0};
	//std::array<int, 1>::iterator	finderArray;

	//std::cout << "testArray = {";
	//for (finderArray = testArray.begin(); finderArray != testArray.end(); ++finderArray) {
	//	std::cout << *finderArray << ", ";
	//}
	//std::cout << *finderArray << std::endl;

	//finderArray = easyfind(testArray, 0);
	//if	(finderLst != testLst.end())
	//	std::cout << *finderLst << std::endl;
	//else
	//	std::cout << "No occurences of the searched value found in testArray" << std::endl;

	return 0;
}