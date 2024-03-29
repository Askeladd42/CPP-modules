/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:13 by plam              #+#    #+#             */
/*   Updated: 2022/09/15 11:13:27 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	type = "Dog";
	std::cout << "Dog default constructor called." << std::endl; 
	_mind = new Brain( "I'm a dog, and I love my master !" );
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called." << std::endl;
	delete _mind;
}

Dog::Dog( Dog const &other ) : Animal(other) {
	type = "Dog";
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog	&Dog::operator=( Dog const &other ) {
	std::cout << "Dog copy assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;	
}

void	Dog::makeSound( void ) const {
	std::cout << "Wouaf ! as sound." << std::endl;
}

void	Dog::printIdeas( void ) const {
	if (this->_mind)
		this->_mind->printIdeas();
}
