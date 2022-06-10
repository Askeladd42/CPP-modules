/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 12:38:33 by plam              #+#    #+#             */
/*   Updated: 2022/06/10 15:50:22 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name) {
	std::cout << "Default ClapTrap constructor called" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;

}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Default ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << this->_name << " attacks " << target 
	<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount 
		<< " points of damage!" << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is destroyed!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints > 0) {
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " regains " << amount 
			<< " hit points!" << std::endl;
	}	
	else
		std::cout << "ClapTrap " << this->_name << " has not enough energy for reparations!" 
		<< std::endl;
}
