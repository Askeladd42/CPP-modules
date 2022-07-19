/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:15:07 by plam              #+#    #+#             */
/*   Updated: 2022/07/13 18:57:20 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) {
	_type = "Default";
	std::cout << "AAnimal default constructor called." << std::endl;
}

AAnimal::~AAnimal( void ) {
	std::cout << "AAnimal destructor called." << std::endl;
}

AAnimal::AAnimal( AAnimal const &other ) {
	std::cout << "Copy AAnimal " << this->getType() << " constructor called." << std::endl;
	*this = other; 
}

AAnimal	&AAnimal::operator=( AAnimal const &other ) {
	std::cout << "Copy AAnimal" << this->_type << " assignment operator called." << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

std::string	AAnimal::getType( void ) const {
	return this->_type;
}

void	AAnimal::makeSound( void ) const {
	std::cout << "Basic sound heard." << std::endl;
}
