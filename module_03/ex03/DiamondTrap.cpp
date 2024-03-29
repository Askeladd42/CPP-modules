/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:47:46 by plam              #+#    #+#             */
/*   Updated: 2022/09/12 18:05:45 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
	std::cout << "Default DiamondTrap " << this->_name << " constructor called" << std::endl;
	this->_energyPoints = 50;
	this->ClapTrap::_name = name + "_clap_name";
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout <<  "Default DiamondTrap " << this->_name << " destructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const &other ) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
	std::cout << "Copy DiamondTrap " << this->_name << " constructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( DiamondTrap const &other ) {
	std::cout << "Copy DiamondTrap " << this->_name << " assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->setHP(other._hitPoints);
		this->setEP(other._energyPoints);
		this->setAP(other._attackDamage);
	}
	return *this;
}

void	DiamondTrap::attack( std::string const &target ) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "My name is " << this->_name << ", but my ClapTrap name is " << this->ClapTrap::_name
	<< std::endl;
}