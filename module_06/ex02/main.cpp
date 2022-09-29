/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:09:03 by plam              #+#    #+#             */
/*   Updated: 2022/09/29 14:59:14 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main(void) {
	Base*	test;

	test = generate();
	std::cout << test << std::endl;
	identify(test);
	identify(*test);

	delete(test);
	return 0;
}