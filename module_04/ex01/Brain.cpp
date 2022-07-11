/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:02:27 by plam              #+#    #+#             */
/*   Updated: 2022/07/11 15:58:01 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( std::string ideas ) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = ideas;	
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor called" <<std::endl;
}

Brain::Brain( Brain const &other ) {
	std::cout << "Brain copy constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

Brain	&Brain::operator=( Brain const &other ) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &other)
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	return *this;
}

void	Brain::printIdeas( void ) const {
	for (int i = 0; i < 100; i++)
		std::cout << this->_ideas[i] << std::endl;
}

std::string	Brain::getIdeas( void ) const {
	return this->_ideas[0];
}