/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:35:25 by plam              #+#    #+#             */
/*   Updated: 2022/10/11 10:11:41 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "############ 1st test : vector of size 5 ############" << std::endl;
	std::vector<int>::iterator	it;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	/*Vector printing*/
	std::cout << "sp = {";
	for (it = sp.getVect().begin(); it != sp.getVect().end(); ++it) {
		if (it != sp.getVect().begin())
			std::cout << ", ";
		std::cout << *it;
	}
	std::cout << "};" << std::endl;

	try {
		std::cout << "shortest span = " << sp.shortestSpan() << std::endl;
		std::cout << "longest span = " << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e) {
		std::cerr << e.what() <<std::endl;
	}

	std::cout << "############ 2nd test : vector of size 10 ############" << std::endl;
	Span	sp0 = Span(10);
	srand(time(NULL) + rand() % 1000);
	unsigned int	i = 0;
	while (i++ < sp0.getSize()) {
		int rdm = rand() % 2;
		if (rdm == 0)
			sp0.addNumber(rand());
		else
			sp0.addNumber(-rand());
	}

	/*Vector printing*/
	std::cout << "sp0 = {";
	for (it = sp0.getVect().begin(); it != sp0.getVect().end(); ++it) {
		if (it != sp0.getVect().begin())
			std::cout << ", ";
		std::cout << *it;
	}
	std::cout << "};" << std::endl;

	try {
		std::cout << "shortest span = " << sp0.shortestSpan() << std::endl;
		std::cout << "longest span = " << sp0.longestSpan() << std::endl;
	}
	catch(std::exception &e) {
		std::cerr << e.what() <<std::endl;
	}

	std::cout << "############ Extra test : vector of size 30000 ############" << std::endl;
	Span	spExtra = Span(30000);
	i = 0;
	srand(time(NULL) + rand() % 10000);
	while (i++ < spExtra.getSize()) {
		int	rdm = rand() % 2;
		if (rdm == 0)
			spExtra.addNumber(rand());
		else
			spExtra.addNumber(-rand());
	}

	/*Vector printing
	std::cout << "spExtra = {";
	for (it = spExtra.getVect().begin(); it != spExtra.getVect().end(); ++it) {
		if (it != spExtra.getVect().begin())
			std::cout << ", ";
		std::cout << *it;
	}
	std::cout << "};" << std::endl;*/
	
	std::cout << "min element of the vector = " << *std::min_element(spExtra.getVect().begin(), spExtra.getVect().end()) << std::endl;
	std::cout << "max element of the vector = " << *std::max_element(spExtra.getVect().begin(), spExtra.getVect().end()) << std::endl;

	try {
		std::cout << "shortest span = " << spExtra.shortestSpan() << std::endl;
		std::cout << "longest span = " << spExtra.longestSpan() << std::endl;
	}
	catch(std::exception &e) {
		std::cerr << e.what() <<std::endl;
	}
	return 0;
}