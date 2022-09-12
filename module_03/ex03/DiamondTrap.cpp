/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:47:46 by plam              #+#    #+#             */
/*   Updated: 2022/09/12 16:24:34 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(std::string(name).append("_clap_name")), ScavTrap(name), FragTrap(name), _name(name) {
	std::cout << "Default DiamondTrap " << this->_name << " constructor called" << std::endl;
	FragTrap::setHP(100);
	ScavTrap::setEP(50);
	FragTrap::setAP(30);
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
		this->setHP(other._hitPoints);
		this->setEP(other._energyPoints);
		this->setAP(other._attackDamage);
	}
	return *this;
}

void	DiamondTrap::attack( std::string &target ) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "My name is " << this->_name << ", but my ClapTrap name is " << this->ClapTrap::_name
	<< std::endl;
}