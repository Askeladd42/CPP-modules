/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:56:31 by plam              #+#    #+#             */
/*   Updated: 2022/08/05 14:15:07 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string name ) : c_name(name) {
	for (int i = 0; i < 4; i++)
		this->c_inv[i] = 0;
	for (int i = 0; i < 50; i++)
		this->c_floor[i] = 0;
	std::cout << "Character " << c_name << " created." << std::endl;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (this->c_inv[i])
			delete this->c_inv[i];
	for (int i = 0; i < 50; i++)
		if (this->c_floor[i])
			delete this->c_floor[i];
	std::cout << "Character " << c_name << " destructor called." << std::endl;
}

Character::Character( Character const &other ) {
	*this = other;
}

Character&	Character::operator=( Character const &other ) {
	if (this != &other)
		for (int i = 0; i < 4; i++) {
			if (this->c_inv[i])
				delete (this->c_inv[i]);
			if (other.c_inv[i])
				this->c_inv[i] = other.c_inv[i]->clone();
			else
				this->c_inv[i] = 0;
		}			
	return *this;
}

std::string const & Character::getName() const {
	return this->c_name;
}

void	Character::equip(AMateria* m) {
	if (m == 0) {
		std::cout << "No materia selected." << std::endl;
		return ;
	}
	int i = 0;

	while (i < 4 && this->c_inv[i])
		i++;
	if (i == 4) {
		std::cout << this->c_name << "'s inventory is already full !" << std::endl;
		if (m)
			delete m;
		return ;
	}
	else {
		this->c_inv[i] = m;
		std::cout << this->c_name << " equiped the material " << m->getType() << " in the slot " << i << std::endl;
}

void	unequip(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "Characters have only 4 equipment slots ! This index doesn't exist !" << std::endl;
		return ;
	}
	if (this->c_inv[idx] == 0) {
		std::cout << "Equipment slot " << idx << " : This slot is empty." << std::endl;
		return ;
	}
	else {
		std::cout << c_name << "dropped a materia in slot " << idx << std::endl;
		drop(c_inv[idx]);
		c_inv[idx] = 0;
	}
}

void	use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3) {
		std::cout << "Characters have only 4 equipment slots ! This slot doesn't exist !" << std::endl;
		return ;
	}
	if (this->c_inv[idx] == 0) {
		std::cout << "Equipment slot " << idx << " : This slot is empty." << std::endl;
		return ;
	}
	else {
		std::cout << c_name << "use a " << c_inv[idx]->_type <<" materia in " << target->c_name << std::endl;
		c_inv[idx]->use(target);
	}
}

void	drop( AMateria* m) {
	int	i = 0;

	while ( i < 50 c_floor[i] )
		i++;
	if (i < 50)
		c_floor[i] = m;
	else if (m) {
		delete m;
		m = 0;
	}
}