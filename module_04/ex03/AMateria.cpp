/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:31:20 by plam              #+#    #+#             */
/*   Updated: 2022/08/17 12:45:50 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria( void ) { }

AMateria::AMateria( std::string const &type ): _type(type) { }

AMateria::~AMateria( void ) { }

AMateria::AMateria( AMateria const &other ) {
	*this = other;
}

AMateria &AMateria::operator=( AMateria const &other ) {
	if (this == &other)
		return *this;
	return *this;
}

std::string const	&AMateria::getType() const {
	return this->_type;
}

void	AMateria::use( ICharacter &target ) {
	std::cout << "Using a " << this->getType() << " Materia on " << target.getName() << std::endl;
}
