/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:47:52 by plam              #+#    #+#             */
/*   Updated: 2022/09/15 14:34:05 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( std::string elm ) {
	this->_toConvert = elm;
	this->_isChar = false;
	this->_isInt = false;
	this->_isFloat = false;
	this->_isDouble = false;
	this->_float = 0;
	this->_double = 0;
	this->setTypes();
}

Convert::~Convert() { }

Convert::Convert( Convert const &other ) {
	*this = other;
}

Convert&	Convert::operator=(Convert const &other ) {
	if (this != &other) {
		this->_toConvert = other._toConvert;
		this->
	}
	return *this;
}

void	Convert::setChar( std::string s ) {

}

void	Convert::setInt( std::string s ) {

}

void	Convert::setFloat( std::string s ) {

}

void	Convert::setDouble( std::string s ) {
	
}

void	Convert::setTypes() {
	this->setChar(this->_toConvert);
	this->setInt(this->_toConvert);
	this->setFloat(this->_toConvert);
	this->setDouble(this->_toConvert);
}

char const		Convert::getChar() const {

}

int const		Convert::getInt() const {

}

float const		Convert::getFloat() const {

}

double const	Convert::getDouble() const {
	
}

void			Convert::getConvert() {
	this->getChar();
	this->getInt();
	this->getFloat();
	this->getDouble();
}
