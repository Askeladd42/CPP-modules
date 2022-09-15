/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:15:07 by plam              #+#    #+#             */
/*   Updated: 2022/09/15 11:13:27 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
	type = "Default";
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal( Animal const &other ) {
	std::cout << "Copy Animal " << this->getType() << " constructor called." << std::endl;
	*this = other; 
}

Animal	&Animal::operator=( Animal const &other ) {
	std::cout << "Copy Animal" << this->type << " assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Animal::setType( std::string newType ) {
	this->type = newType;
}

std::string	Animal::getType( void ) const {
	return this->type;
}

void	Animal::makeSound( void ) const {
	std::cout << "Basic sound heard." << std::endl;
}
