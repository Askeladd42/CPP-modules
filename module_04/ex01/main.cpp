/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:31:38 by plam              #+#    #+#             */
/*   Updated: 2022/07/07 13:04:29 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int	main( void ) {
	{
		const Animal*	SPA[10];
		
		for (int i = 0; i < 10; i++)
		{
			if (i % 2)
				SPA[i] = new Dog();
			else
				SPA[i] = new Cat();
			std::cout << "SPA is full !" << std::endl;
		}
		for (int i = 0; i < 10; i++)
			delete SPA[i];
		std::cout << "SPA was raided by PETA, doing usual PETA idiocies ..." << std::endl;
		return 0;
	}
}
