/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 12:38:33 by plam              #+#    #+#             */
/*   Updated: 2022/06/15 15:16:11 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

ClapTrap::ClapTrap( ClapTrap const &other ) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage) {
	std::cout << "Copy ClapTrap constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=( ClapTrap const &other ) {
	std::cout << "Copy ClapTrap assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

void ClapTrap::attack( const std::string& target ) {
	if (this->_energyPoints == 0)
		std::cout << this->_name << " has no energy to attack!" << std::endl;
	if (this->_hitPoints <= 0) 
		std::cout << this->_name << " is destroyed! It cannot attack!" << std::endl;
	else {
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target 
		<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage( unsigned int amount ) {
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount 
		<< " points of damage!" << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is destroyed!" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " has not enough energy for reparations!" << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is destroyed! It cannot repair itself!" << std::endl;
	else {
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " regains " << amount 
			<< " hit points!" << std::endl;
	}
}

void	ClapTrap::displayStatus( void ) {
	std::cout << std::endl << this->_name << " status :" << std::endl;
	std::cout << "HP: " << this->_hitPoints;
	std::cout << "	EP: " << this->_energyPoints << std::endl;
}
