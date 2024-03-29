/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:44:08 by plam              #+#    #+#             */
/*   Updated: 2022/09/09 13:54:35 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	this->_name = name;
	std::cout << "Default ScavTrap " << this->_name << " constructor called" << std::endl;
	this->setHP(100);
	this->setEP(50);
	this->setAP(20);
}

ScavTrap::~ScavTrap( void ) {
	std::cout <<  "Default ScavTrap " << this->_name << " destructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &other ) : ClapTrap(other) {
	std::cout << "Copy ScavTrap " << this->_name << " constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const &other ) {
	std::cout << "Copy ScavTrap " << this->_name << " assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->setHP(other._hitPoints);
		this->setEP(other._energyPoints);
		this->setAP(other._attackDamage);
	}
	return *this;
}

void	ScavTrap::attack( const std::string& target ) {
	if (this->_energyPoints == 0)
		std::cout << this->_name << " has no energy to attack!" << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " is destroyed! It cannot attack!" << std::endl;
	else {
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target 
		<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	ScavTrap::takeDamage( unsigned int amount ) {
	this->_hitPoints -= amount;
	std::cout << "ScavTrap " << this->_name << " takes " << amount 
		<< " points of damage!" << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " is destroyed!" << std::endl;
}

void	ScavTrap::beRepaired( unsigned int amount ) {
	if (this->_energyPoints == 0)
		std::cout << "ScavTrap " << this->_name << " has not enough energy for reparations!" << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " is destroyed! It cannot repair itself!" << std::endl;
	else {
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " regains " << amount 
			<< " hit points!" << std::endl;
	}
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << this->_name << " has entered in Guard mode!" << std::endl;
}