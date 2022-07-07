/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:00:54 by plam              #+#    #+#             */
/*   Updated: 2022/07/07 13:32:29 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	this->_type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
	_Brain = new Brain();
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called." << std::endl;
	delete _Brain;
}

Cat::Cat( Cat const &other ) : Animal(other) {
	this->_type = "Cat";
	std::cout << "Copy Cat constructor called." << std::endl;
}

Cat	&Cat::operator=( Cat const &other ) {
	std::cout << "Copy Cat assignment operator called." << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << "Miaou ! as sound." << std::endl;
}

void	Cat::printIdeas( void ) const {
	int i = 0;
	while (this->_Brain)
		std::cout << this->_Brain[i++] << std::endl;
}