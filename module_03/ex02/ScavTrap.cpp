/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:44:08 by plam              #+#    #+#             */
/*   Updated: 2022/06/10 16:14:22 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : _name(name) {
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "Default ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	std::cout << "ScavTrap " << this->_name << " attacks " << target 
	<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
	std::cout << "ScavTrap " << this->_name << " takes " << amount 
		<< " points of damage!" << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " is destroyed!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints > 0) {
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " regains " << amount 
			<< " hit points!" << std::endl;
	}	
	else
		std::cout << "ScavTrap " << this->_name << " has not enough energy for reparations!" 
		<< std::endl;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << this->_name << " has entered in Guard mode!" << std::endl;
}