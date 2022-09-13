/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:47:52 by plam              #+#    #+#             */
/*   Updated: 2022/09/13 15:02:53 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

convert::convert( std::string elm ) {
	this->_toConvert = elm;
}

convert::~convert() { }

convert::convert( convert const &other ) {
	*this = other;
}

convert&	convert::operator=(convert const &other ) {
	if (this != &other) {
		/* to complete */
	}
	return *this;
}

void	convert::setChar( std::string s ) {

}

void	convert::setInt( std::string s ) {

}

void	convert::setFloat( std::string s ) {

}

void	convert::setDouble( std::string s ) {
	
}

char const		convert::getChar() const {

}

int const		convert::getInt() const {

}

float const		convert::getFloat() const {

}

double const	convert::getDouble() const {
	
}

void	convert::getConvert() {
	this->getChar();
	this->getInt();
	this->getFloat();
	this->getDouble();
}
