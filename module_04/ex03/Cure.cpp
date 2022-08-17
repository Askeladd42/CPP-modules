/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:39:45 by plam              #+#    #+#             */
/*   Updated: 2022/08/17 11:42:01 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" ) { }

Cure::~Cure( void ) { }

Cure::Cure( Cure const &other ) : AMateria(other) { }

Cure	&Cure::operator=( Cure const &other ) {
	if (this == &other)
		return *this;
	return *this;
}

Cure	*Cure::clone() const {
	return new Cure(*this);
}

void	Cure::use( ICharacter &target ) {
	std::cout << target.getName() << " is casting a healing on " << target.getName() << " wounds." << std::endl; 
}
