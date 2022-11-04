/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:37:35 by plam              #+#    #+#             */
/*   Updated: 2022/11/04 17:43:27 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int N ) : _size(N), _stock() { }

Span::~Span() { }

Span::Span( Span const &other ) {
	this->_size = other._size;
	this->_stock = other._stock;
}

Span&				Span::operator=( Span const &other ) {
	if (this != &other) {
		this->_size = other._size;
		this->_stock = other._stock;
	}
	return *this;
}

void				Span::addNumber( int newNb ) {
	if (this->_stock.size() == this->_size)
		throw AlreadyFull;
	else
		this->_stock.push_back(newNb);
}

void				Span::fillVect(unsigned int n, int nb) {
	if ( n > this->_size - this->_stock.size())
		throw AlreadyFull;
	this->_stock.insert(this->_stock.end(), n, nb);
}

unsigned int		Span::getSize() {
	return this->_size;
}

std::vector<int>	Span::getVect() {
	return this->_stock;
}

unsigned int		Span::shortestSpan() {
	if (this->_stock.size() <= 1)
		throw NoSpan;
	std::vector<int>	tmp = this->_stock;
	std::sort(tmp.begin(), tmp.end());		//sorting the vector to easily find the shortest span
	int	span = tmp.at(1) - tmp.at(0);
	for (unsigned int i = 1; i < this->_stock.size() - 1; i++)
		span = std::min(tmp.at(i + 1) - tmp.at(i), span);
	return span;
}

unsigned int	Span::longestSpan() {
	if (this->_stock.size() <= 1)
		throw NoSpan;
	else {					//just getting the max and the min element of the vect and make the diff
		long int	mn = 0;
		long int	mx = 0;
		mn = *std::min_element(this->_stock.begin(), this->_stock.end());
		mx = *std::max_element(this->_stock.begin(), this->_stock.end());
		return (mx - mn);
	}
}