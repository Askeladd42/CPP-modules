/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:58:24 by plam              #+#    #+#             */
/*   Updated: 2022/09/16 00:04:43 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat( std::string type ) {
	this->type = type;
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const &other ) : WrongAnimal(other) {
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=( WrongCat const &other ) {
	std::cout << "WrongCat assignment operator called" << std::endl;
	if ( this != &other )
		this->type = other.type;
	return *this;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "a weird Mawr ! as sound." << std::endl;
}
