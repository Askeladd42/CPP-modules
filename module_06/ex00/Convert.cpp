/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:47:52 by plam              #+#    #+#             */
/*   Updated: 2022/09/20 17:27:16 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( std::string elm ) {
	this->_toConvert = elm;
	this->_isEmpty = true;
	this->_isChar = false;
	this->_isInt = false;
	this->_isFloat = false;
	this->_isDouble = false;
	this->_char = 0;
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
		this->_isChar = other._isChar;
		this->_isInt = other._isInt;
		this->_isFloat = other._isFloat;
		this->_isDouble = other._isDouble;
		this->_char = other._char;
		this->_double = other._double;
	}
	return *this;
}

void	Convert::setChar( std::string s ) {
	char	tmp;
	
	tmp = s.c_str()[0];
	if (s.size() == 1
	&& tmp >= std::numeric_limits<char>::min()
	&& tmp <= std::numeric_limits<char>::max()) {
		this->_isChar = true;
		this->_isEmpty = false;
		this->_char = s.c_str()[0];
	}
}

void	Convert::setInt( std::string s ) {
	char		*pos;
	long int	tmp;

	tmp = strtol(s.c_str(), &pos, 10);
	if (*pos == '\0' 
	&& tmp >= std::numeric_limits<int>::min()
	&& tmp <= std::numeric_limits<int>::max()){
		this->_isInt = true;
	}
}

void	Convert::setFloat( std::string s ) {
	char		*pos;
	float		tmp;

	tmp = strtof(s.c_str(), &pos);
	if (*pos == '\0' 
	&& tmp >= std::numeric_limits<float>::min()
	&& tmp <= std::numeric_limits<float>::max())
		this->_isFloat = true;
}

void	Convert::setDouble( std::string s ) {
	char		*pos;
	long double	tmp;

	tmp = strtod(s.c_str(), &pos);
	if (*pos == '\0' 
	&& tmp >= std::numeric_limits<double>::min()
	&& tmp <= std::numeric_limits<double>::max()) {
		this->_isDouble = true;
		this->_double = tmp;
	}
}

void	Convert::setTypes() {
	this->setChar(this->_toConvert);
	this->setInt(this->_toConvert);
	this->setFloat(this->_toConvert);
	this->setDouble(this->_toConvert);
}

void	Convert::getChar() const {
	std::cout << "char: ";
	if (this->_isEmpty == false
	&& this->_char >= std::numeric_limits<char>::min()
	&& this->_char <= std::numeric_limits<char>::max()) {
		if (isprint(this->_char))
			std::cout << this->_char << std::endl;
		else
			std::cout << "Non printable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void	Convert::getInt( double n ) const {
	std::cout << "int: ";
	if (this->_isInt == true
	&& n >= std::numeric_limits<int>::min()
	&& n <= std::numeric_limits<int>::max())
		std::cout << static_cast<int>(n) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	Convert::getFloat( double n ) const {
	std::cout << "float: ";
	if (this->_isFloat == true
	&& n >= std::numeric_limits<float>::min()
	&& n <= std::numeric_limits<float>::max())
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(n) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	Convert::getDouble( double n ) const {
	std::cout << "double: ";
	if (this->_isDouble == true
	&& n >= std::numeric_limits<double>::min()
	&& n <= std::numeric_limits<double>::max())
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(n) << std::endl;
	else
		std::cout << "impossible" << std::endl;

}

void	Convert::getConvert() {
	this->getChar();
	this->getInt(this->_double);
	this->getFloat(this->_double);
	this->getDouble(this->_double);
}
