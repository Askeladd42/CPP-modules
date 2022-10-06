/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:37:35 by plam              #+#    #+#             */
/*   Updated: 2022/10/06 19:38:19 by plam             ###   ########.fr       */
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

Span&	Span::operator=( Span const &other ) {
	if (this != &other) {
		this->_size = other._size;
		this->_stock.resize(other._size);
	}
}

void	Span::addNumber( int newNb ) {
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

unsigned int	Span::shortestSpan() {
	try {
		if (/*function for the shortest span in the verctor*/)
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
		if (/*function for the shortest span in the verctor*/)
			throw NoSpan;
		else
			return (0);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}