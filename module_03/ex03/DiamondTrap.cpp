/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:47:46 by plam              #+#    #+#             */
/*   Updated: 2022/09/12 13:51:57 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(std::string(name).append("_clap_name")), _name(name) {
	std::cout << "Default DiamondTrap " << this->_name << " constructor called" << std::endl;
	FragTrap::setHP(100);
	ScavTrap::setEP(50);
	FragTrap::setAP(30);
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout <<  "Default DiamondTrap " << this->_name << " destructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const &other ) : ClapTrap(other) {
	std::cout << "Copy DiamondTrap " << this->_name << " constructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( DiamondTrap const &other ) {
	std::cout << "Copy DiamondTrap " << this->_name << " assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

void	DiamondTrap::attack( const std::string& target ) {
	if (this->_energyPoints == 0)
		std::cout << this->_name << " has no energy to attack!" << std::endl;
	if (this->_hitPoints <= 0) 
		std::cout << this->_name << " is destroyed! It cannot attack!" << std::endl;
	else {
		this->_energyPoints--;
		std::cout << "DiamondTrap " << this->_name << " attacks " << target 
		<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	DiamondTrap::takeDamage( unsigned int amount ) {
	this->_hitPoints -= amount;
	std::cout << "DiamondTrap " << this->_name << " takes " << amount 
		<< " points of damage!" << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << "DiamondTrap " << this->_name << " is destroyed!" << std::endl;
}

void	DiamondTrap::beRepaired( unsigned int amount ) {
	if (this->_energyPoints == 0)
		std::cout << "DiamondTrap " << this->_name << " has not enough energy for reparations!" << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << "DiamondTrap " << this->_name << " is destroyed! It cannot repair itself!" << std::endl;
	else {
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "DiamondTrap " << this->_name << " regains " << amount 
			<< " hit points!" << std::endl;
	}
}

void	DiamondTrap::guardGate( void ) {
	std::cout << "DiamondTrap " << this->_name << " has entered in Guard mode!" << std::endl;
}

void	DiamondTrap::highFivesGuys( void ) {
	if (this->_energyPoints > 0) {
		std::cout << this->_name << " : C'mon guys ! Give me a five !" << std::endl;
		this->_energyPoints--;
	}
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "My name is " << this->_name << ", but my ClapTrap name is " << this->ClapTrap::_name
	<< std::endl;
}