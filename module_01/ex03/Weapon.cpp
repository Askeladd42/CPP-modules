/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:08:24 by plam              #+#    #+#             */
/*   Updated: 2022/05/30 14:36:46 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) { }

void			Weapon::setType(std::string newType) : _type(newType) { }

std::string&	Weapon::getType( void ) const {
	return (_type);
}

Weapon::~Weapon( void ) { }