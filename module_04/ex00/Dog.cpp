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
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog( Dog const &other ) : Animal(other) {
	type = "Dog";
	std::cout << "Copy Dog constructor called." << std::endl;
}

Dog	&Dog::operator=( Dog const &other ) {
	std::cout << "Copy Dog assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;	
}

void	Dog::makeSound( void ) const {
	std::cout << "Wouaf ! as sound." << std::endl;
}