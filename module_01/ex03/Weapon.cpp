/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:08:24 by plam              #+#    #+#             */
/*   Updated: 2022/05/31 13:32:04 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) { }

Weapon::~Weapon( void ) {
	std::cout << _type << " got lost/destroyed !" << std::endl; 
}

void	Weapon::setType(std::string newType) {
	_type = newType;
}

std::string	Weapon::getType( void ) const {
	return (_type);
}
