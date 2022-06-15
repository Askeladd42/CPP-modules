/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:58:23 by plam              #+#    #+#             */
/*   Updated: 2022/06/15 14:06:11 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	this->_name = name;
	std::cout << "Default FragTrap " << this->_name << " constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap( void ) {
	std::cout <<  "Default FragTrap " << this->_name << " destructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const &other ) : ClapTrap(other) {
	std::cout << "Copy FragTrap " << this->_name << " constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=( FragTrap const &other ) {
	std::cout << "Copy FragTrap " << this->_name << " assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

void	FragTrap::attack( const std::string& target ) {
	if (this->_energyPoints == 0)
		std::cout << this->_name << " has no energy to attack!" << std::endl;
	if (this->_hitPoints <= 0) 
		std::cout << this->_name << " is destroyed! It cannot attack!" << std::endl;
	else {
		this->_energyPoints--;
		std::cout << "FragTrap " << this->_name << " attacks " << target 
		<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	FragTrap::takeDamage( unsigned int amount ) {
	this->_hitPoints -= amount;
	std::cout << "FragTrap " << this->_name << " takes " << amount 
		<< " points of damage!" << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << "FragTrap " << this->_name << " is destroyed!" << std::endl;
}

void	FragTrap::beRepaired( unsigned int amount ) {
	if (this->_energyPoints == 0)
		std::cout << "FragTrap " << this->_name << " has not enough energy for reparations!" << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << "FragTrap " << this->_name << " is destroyed! It cannot repair itself!" << std::endl;
	else {
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "FragTrap " << this->_name << " regains " << amount 
			<< " hit points!" << std::endl;
	}
}

void	FragTrap::highFivesGuys( void ) {
	if (this->_energyPoints > 0) {
		std::cout << this->_name << " : C'mon guys ! Give me a five !" << std::endl;
		this->_energyPoints--;
	}
}