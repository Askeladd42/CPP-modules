/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:47:52 by plam              #+#    #+#             */
/*   Updated: 2022/09/13 15:13:14 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( std::string elm ) {
	this->_toConvert = elm;
}

Convert::~Convert() { }

Convert::Convert( Convert const &other ) {
	*this = other;
}

Convert&	Convert::operator=(Convert const &other ) {
	if (this != &other) {
		/* to complete */
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
