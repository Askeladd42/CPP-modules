/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:11:32 by plam              #+#    #+#             */
/*   Updated: 2022/05/30 12:55:42 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA( std::string name ) : _name(name) {
	std::cout << _name << " has arrived !" << std::endl;
}

HumanA::attack( void ){
	std::cout << _name << " attacks with their " << _weapon << std::endl;
}

HumanA::~HumanA( void ) {
	std::cout << _name << " is eaten by the horde !" << std::endl;
}