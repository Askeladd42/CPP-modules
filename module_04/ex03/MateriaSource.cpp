/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:50:50 by plam              #+#    #+#             */
/*   Updated: 2022/08/09 13:12:45 by plam             ###   ########.fr       */
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
}

AMateria*	MateriaSource::createMateria( std::string const &type ) {
	if (type == "")
		return ;
}
