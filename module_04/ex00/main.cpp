/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:31:38 by plam              #+#    #+#             */
/*   Updated: 2022/06/24 17:38:35 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int	main( void ) {
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
	}
	{
		std::cout << std::endl << std::endl;
		
		const Animal*	wild = new Animal();
		const Dog		Dogmeat;
		const Cat		Nibbles;

		std::cout << "wild animal has " << wild->getType() << " type and makes ";
		wild->makeSound();

		std::cout << "Dogmeat has " << Dogmeat.getType() << " type and makes ";
		Dogmeat.makeSound();

		std::cout << "Nibbles has " << Nibbles.getType() << " type and makes ";
		Nibbles.makeSound();
	}
}
