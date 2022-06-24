/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:13 by plam              #+#    #+#             */
/*   Updated: 2022/06/24 18:11:51 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	_type = "Dog";
	std::cout << "Dog default constructor called." << std::endl; 
	_mind = new Brain();
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called." << std::endl;
	delete _mind;
}

Dog::Dog( Dog const &other ) : Animal(other) {
	_type = "Dog";
	std::cout << "Copy Dog constructor called." << std::endl;
}

Dog	&Dog::operator=( Dog const &other ) {
	std::cout << "Copy Dog assignment operator called." << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;	
}

void	Dog::makeSound( void ) const {
	std::cout << "Wouaf ! as sound." << std::endl;
}