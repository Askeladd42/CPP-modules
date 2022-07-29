/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:42:14 by plam              #+#    #+#             */
/*   Updated: 2022/07/29 18:32:47 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria( "ice" ) { }

Ice::~Ice( void ) { }

Ice::Ice( Ice const &other ) : AMateria(other) { }

Ice	&Ice::operator=( Ice const &other ) {
	if (this == &other)
		return *this;
	return *this;
}

Ice	*Ice::clone() const {
	return new Ice(*this);
}

void	Ice::use( ICharacter &target ) const {
	std::cout << "Launching a freeze beam to " << target.getName() << std::endl; 
}
