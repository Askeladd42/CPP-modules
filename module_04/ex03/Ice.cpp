/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:42:14 by plam              #+#    #+#             */
/*   Updated: 2022/09/16 15:42:40 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria( "ice" ) { }

Ice::~Ice( void ) { }

Ice::Ice( Ice const &other ) : AMateria(other) { }

Ice	&Ice::operator=( Ice const &other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

Ice	*Ice::clone() const {
	return new Ice(*this);
}

void	Ice::use( ICharacter &target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl; 
}
