/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:50:50 by plam              #+#    #+#             */
/*   Updated: 2022/08/11 14:23:13 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	for (int i = 0; i < 4; i++)
		m_slot[i] = 0;
}

MateriaSource::~MateriaSource( void ) {
	for (int i = 0; i < 4; i++) {
		if (m_slot[i]) {
			delete m_slot[i];
		}
	}
}

MateriaSource::MateriaSource( MateriaSource const &other ) {
	*this = other;
}

MateriaSource& MateriaSource::operator=( MateriaSource const &other ) {
	if (this != &other) {
		for (int i = 0; i < 4; i++ ) {
			if (m_slot[i])
				delete m_slot[i];
			if (other.m_slot[i])
				m_slot[i] = m_slot[i]->clone();
			else
				m_slot[i] = 0;
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m) {
	if (m == 0) {
		std::cout << "No materia available for learning !" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		if (m_slot[i] == 0) {
			m_slot[i] = m;
			return ;
		}
	}
	std::cout << "This materia is already full ! It can't learn another magic type !" << std::endl;
	delete m;
	m = 0;
}

AMateria*	MateriaSource::createMateria( std::string const &type ) {
	if (type == "") {
		std::cout << "Empty type passed : can't create a new materia." << std::endl;
		return 0;
	}
	for (int i = 0; i < 4; i++) {
		if (m_slot[i] && type.compare(m_slot[i]->getType()) == 0) {
			return m_slot[i]->clone();
		}
	}
	std::cout << "The Materia Source didn't learn the type: " << type << "for some odd reasons ..." << std::endl;
	return 0;
}
