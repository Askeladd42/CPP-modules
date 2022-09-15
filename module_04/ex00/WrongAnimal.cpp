/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:58:45 by plam              #+#    #+#             */
/*   Updated: 2022/09/16 00:00:09 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &other ) : type(other.type) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &other ) {
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if ( this != &other )
		type = other.type;
	return *this;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "Weird basic sound heard." << std::endl;
}