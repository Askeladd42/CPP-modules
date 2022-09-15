/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:31:20 by plam              #+#    #+#             */
/*   Updated: 2022/09/15 11:13:27 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria( void ) { }

AMateria::AMateria( std::string const &type ): type(type) { }

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
	return this->type;
}

void	AMateria::use( ICharacter &target ) {
	std::cout << "Using a " << this->getType() << " Materia on " << target.getName() << std::endl;
}
