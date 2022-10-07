/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:37:35 by plam              #+#    #+#             */
/*   Updated: 2022/10/07 12:17:33 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int N ) : _size(N) {
	this->_stock.resize(N);
}

Span::~Span() { }

Span::Span( Span const &other ) {
	*this = other;
}

Span&				Span::operator=( Span const &other ) {
	if (this != &other) {
		this->_size = other._size;
		this->_stock.resize(other._size);
	}
}

void				Span::addNumber( int newNb ) {
	try {
		if (this->_stock.size() == this->_stock.capacity())
			throw AlreadyFull;
		else
			this->_stock.push_back(newNb);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

unsigned int		Span::getSize() {
	return this->_size;
}

std::vector<int>	Span::getVect() {
	return this->_stock;
}

unsigned int		Span::shortestSpan() {
	try {
		if (this->_stock.size() == 0 || this->_stock.size() == 1)
			throw NoSpan;
		else
			return (0);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

unsigned int	Span::longestSpan() {
	try {
		if (this->_stock.size() == 0 || this->_stock.size() == 1)
			throw NoSpan;
		else {
			int	mn = 0;
			int	mx = 0;
			for (unsigned int i = 0; i < this->_size - 1; i++) {
				mn = std::min(this->_stock[i], this->_stock[i + 1]);
				mx = std::max(this->_stock[i], this->_stock[i + 1]);
			}
			return (mx - mn);
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}