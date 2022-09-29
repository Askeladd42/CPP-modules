/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:32:33 by plam              #+#    #+#             */
/*   Updated: 2022/09/29 13:37:22 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate( void ) {
	int	rdm;

	srand(time(NULL) + rand() % 1000);
	rdm = rand() % 3;
	if (rdm == 0) {
		std::cout << "A base created : " << std::endl;
		return new A;
	}
	else if (rdm == 1) {
		std::cout << "B base created : " << std::endl;
		return new B;
	}
	else {
		std::cout << "C base created : " << std::endl;
		return new C;
	}
}

void	identify( Base* p ) {
	if (dynamic_cast<A*>(p))
		std::cout << "A base identified by base ptr" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B base identified by base ptr" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C base identified by base ptr" << std::endl;
	else
		std::cout << "Default base identified by base ptr, none A, B or C match with it" << std::endl;
}

void	identify( Base& p ) {
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "A base identified by base ref" << std::endl;

		B b = dynamic_cast<B&>(p);
		std::cout << "B base identified by base ref" << std::endl;

		C c = dynamic_cast<C&>(p);
		std::cout << "C base identified by base ref" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Default base identified by base ref : " << e.what() << ", none A, B or C match with it" << std::endl;
	}
}