/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:39:45 by plam              #+#    #+#             */
/*   Updated: 2022/07/29 18:36:34 by plam             ###   ########.fr       */
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

void	Cure::use( ICharacter &target ) const {
	std::cout << "Casting a healing on " << target.getName() << " wounds." << std::endl; 
}
