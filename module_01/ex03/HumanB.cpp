/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:15:51 by plam              #+#    #+#             */
/*   Updated: 2022/05/30 15:11:38 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
	std::cout << _name << " has arrived !" << std::endl;
}

HumanB::~HumanB( void ) {
	std::cout << _name << " is eaten by the horde !" << std::endl;
}

void	HumanB::attack( void ){
	if (this->_weapon)
		std::cout << _name << " attacks with their "<< _weapon->getType() << std::endl;
	std::cout << _name << " attacks with their bare hands !" << std::endl;	
}

void	HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}