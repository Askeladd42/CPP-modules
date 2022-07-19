/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:31:38 by plam              #+#    #+#             */
/*   Updated: 2022/07/19 14:45:41 by plam             ###   ########.fr       */
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
		{
			SPA[i]->makeSound();
			SPA[i]->printIdeas();
		}
		for (int i = 0; i < 10; i++)
			delete SPA[i];
		std::cout << "SPA was raided by PETA, doing usual PETA idiocies ..." << std::endl;
	}

	{
		std::cout << "//==========\\\\" << std::endl;
		std::cout << "---Deep copy test---" << std::endl;
		std::cout << "//==========\\\\" << std::endl;

		Dog	cloneDog;
		Cat	cloneCat;

		const Dog	Dogmeat;
		cloneDog = Dogmeat;
		const Cat	Nibbles;
		cloneCat = Nibbles;

		cloneDog.printIdeas();
		cloneCat.printIdeas();
	}
	return 0;
}
