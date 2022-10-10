/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:35:25 by plam              #+#    #+#             */
/*   Updated: 2022/10/10 16:01:34 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "############ 1st test : span of size 5 ############" << std::endl;
	std::vector<int>::iterator	it;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	for (it = sp.begin(); it != sp.end(); ++it) {
		if (it != sp.begin())
			std::cout << ", ";
		std::cout << *it;
	}
	std::cout << "};" << std::endl;

	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e) {
		std::cerr << e.what() <<std::endl;
	}

	std::cout << "############ 2nd test : span of size 10 ############" << std::endl;
	Span	sp0 = Span(10);
	srand(time(NULL) + rand() % 1000);
	unsigned int	i = 0;
	while (i++ < sp0.getSize())
		sp0.addNumber(rand());
	try {
		std::cout << sp0.shortestSpan() << std::endl;
		std::cout << sp0.longestSpan() << std::endl;
	}
	catch(std::exception &e) {
		std::cerr << e.what() <<std::endl;
	}

	std::cout << "############ Extra test : span of size 100000 ############" << std::endl;
	Span	spExtra = Span(100000);
	i = 0;
	while (i++ < spExtra.getSize())
		spExtra.addNumber(rand());
	try {
		std::cout << spExtra.shortestSpan() << std::endl;
		std::cout << spExtra.longestSpan() << std::endl;
	}
	catch(std::exception &e) {
		std::cerr << e.what() <<std::endl;
	}
	return 0;
}