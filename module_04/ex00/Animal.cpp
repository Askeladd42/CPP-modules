/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:15:07 by plam              #+#    #+#             */
/*   Updated: 2022/09/13 17:37:37 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
	_type = "Default";
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
	std::cout << "Copy Animal" << this->_type << " assignment operator called." << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void	Animal::setType( std::string newType ) {
	this->_type = newType;
}

std::string	Animal::getType( void ) const {
	return this->_type;
}

void	Animal::makeSound( void ) const {
	std::cout << "Basic sound heard." << std::endl;
}
