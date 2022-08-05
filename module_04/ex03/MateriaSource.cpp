/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:50:50 by plam              #+#    #+#             */
/*   Updated: 2022/08/05 16:01:11 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

	MateriaSource::MateriaSource( MateriaSource const &other ) {

	}
	MateriaSource& MateriaSource::operator=( MateriaSource const &other ) {
		
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
