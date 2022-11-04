/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:35:25 by plam              #+#    #+#             */
/*   Updated: 2022/11/04 17:57:38 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "############ 1st test : vector of size 5 predefined ############" << std::endl;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	/*Vector printing*/
	std::cout << "sp = {";
	for (size_t i = 0; i < sp.getSize() - 1; i++) {
		std::cout << sp.getVect()[i] << ", ";
	}
	std::cout << sp.getVect()[sp.getSize() - 1] << "};" << std::endl;

	try {
		std::cout << "shortest span = " << sp.shortestSpan() << std::endl;
		std::cout << "longest span = " << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	/* Vector overflow testing */
	try {
		sp.addNumber(42);
	}
	catch(std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "############ 2nd test : vector of size 10 ############" << std::endl;
	Span	sp0 = Span(10);
	srand(time(NULL) + rand() % 1000);
	try {						// just to illustrate the shortestSpan with real different spans
		int	rdm = rand();
		sp0.fillVect(1, rdm);
		rdm = rand();
		sp0.fillVect(1, rdm);
		rdm = rand();
		sp0.fillVect(1, rdm);
		rdm = rand();
		sp0.fillVect(1, rdm);
		rdm = rand();
		sp0.fillVect(1, rdm);
		rdm = rand();
		sp0.fillVect(1, rdm);
		rdm = rand();
		sp0.fillVect(1, rdm);
		rdm = rand();
		sp0.fillVect(1, rdm);
		rdm = rand();
		sp0.fillVect(1, rdm);
		rdm = rand();
		sp0.fillVect(1, rdm);
	}
	catch(std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	/*Vector printing*/
	std::cout << "sp0 = {";
	for (size_t i = 0; i < sp0.getSize() - 1; i++) {
		std::cout << sp0.getVect()[i] << ", ";
	}
	std::cout << sp0.getVect()[sp0.getSize() - 1] << "};" << std::endl;

	try {
		std::cout << "shortest span = " << sp0.shortestSpan() << std::endl;
		std::cout << "longest span = " << sp0.longestSpan() << std::endl;
	}
	catch(std::exception &e) {
		std::cerr << e.what() <<std::endl;
	}

	std::cout << "############ 2nd test : randomized vector of size 50 ############" << std::endl;
	Span	sp50 = Span(50);
	try {
		int	rdm = rand();
		sp50.fillVect(1, rdm);
		rdm = rand();
		sp50.fillVect(9, rdm);
		rdm = rand();
		sp50.fillVect(10, rdm);
		rdm = rand();
		sp50.fillVect(10, rdm);
		rdm = rand();
		sp50.fillVect(10, rdm);
		rdm = rand();
		sp50.fillVect(10, rdm);
	}
	catch(std::exception &e) {
		std::cerr << e.what() << std::endl;
	}


	/*Vector printing*/
	std::cout << "sp50 = {";
	for (size_t i = 0; i < sp50.getSize() - 1; i++) {
		std::cout << sp50.getVect()[i] << ", ";
	}
	std::cout << sp50.getVect()[sp50.getSize() - 1] << "};" << std::endl;

	try {
		std::cout << "shortest span = " << sp50.shortestSpan() << std::endl;
		std::cout << "longest span = " << sp50.longestSpan() << std::endl;
	}
	catch(std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "############ Extra test : vector of size 30000 ############" << std::endl;
	Span	spExtra = Span(30000);
	try {
		int	rdm = rand();
		spExtra.fillVect(5000, rdm);
		rdm = rand();
		spExtra.fillVect(10000, rdm);
		rdm = rand();
		spExtra.fillVect(3000, rdm);
		rdm = rand();
		spExtra.fillVect(10000, rdm);
		rdm = rand();
		spExtra.fillVect(1, rdm);
		rdm = rand();
		spExtra.fillVect(1999, rdm);
	}
	catch(std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	/*Vector printing
	std::cout << "spExtra = {";
	for (unsigned int i = 0; i < spExtra.getSize() - 1; i++) {
		std::cout << spExtra.getVect()[i] << ", ";
	}
	std::cout << spExtra.getVect()[spExtra.getSize() - 1] << "};" << std::endl;*/
	
	//std::cout << "min element of the vector = " << *std::min_element(spExtra.getVect().begin(), spExtra.getVect().end()) << std::endl;		//WARNING ! HIGH CHANCES OF OF LEAKS/MINOR ERROS WITH VALGRIND AND BIG VECTORS
	//std::cout << "max element of the vector = " << *std::max_element(spExtra.getVect().begin(), spExtra.getVect().end()) << std::endl;

	try {
		std::cout << "shortest span = " << spExtra.shortestSpan() << std::endl;
		std::cout << "longest span = " << spExtra.longestSpan() << std::endl;
	}
	catch(std::exception &e) {
		std::cerr << e.what() <<std::endl;
	}
	return 0;
}
