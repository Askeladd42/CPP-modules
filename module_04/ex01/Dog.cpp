/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:13 by plam              #+#    #+#             */
/*   Updated: 2022/06/24 16:24:58 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : _type( "Dog" ) {
	std::cout << "Dog default constructor called." << std::endl; 
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog( Dog const &other ) : Animal(other) {
	std::cout << "Copy Dog constructor called." << std::endl;
}

Dog	&Dog::operator=( Dog const &other ) {
	std::cout << "Copy Dog assignment operator called." << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;	
}

void	Dog::makeSound( void ) const {
	std::cout << "Wouaf !" << std::endl;
}