/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:00:54 by plam              #+#    #+#             */
/*   Updated: 2022/09/15 11:13:27 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	this->type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
	_mind = new Brain( "I'm a cat, and I don't care about my master." );
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called." << std::endl;
	delete _mind;
}

Cat::Cat( Cat const &other ) : Animal(other) {
	this->type = "Cat";
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat	&Cat::operator=( Cat const &other ) {
	std::cout << "Cat copy assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << "Miaou ! as sound." << std::endl;
}

void	Cat::printIdeas( void ) const {
	if (this->_mind)
		this->_mind->printIdeas();
}