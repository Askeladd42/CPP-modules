/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:47:52 by plam              #+#    #+#             */
/*   Updated: 2022/09/26 10:44:26 by plam             ###   ########.fr       */
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
	if (s.size() == 1 && !isdigit(s.at(0))
	&& static_cast<char>(s.at(0)) >= std::numeric_limits<char>::min()
	&& static_cast<char>(s.at(0)) <= std::numeric_limits<char>::max()) {
		this->_isChar = true;
		this->_isEmpty = false;
		this->_char = s.at(0);
	}
	else if (s.size() == 0)
		this->_isEmpty = true;
	else
		this->_char = atoi(s.c_str());
}

void	Convert::setInt( std::string s ) {
	char		*endPtr;
	long int	tmp;

	tmp = strtol(s.c_str(), &endPtr, 10);
	if (*endPtr == '\0' 
	&& tmp >= std::numeric_limits<int>::min()
	&& tmp <= std::numeric_limits<int>::max()){
		this->_isInt = true;
		this->_isEmpty = false;
	}
}

void	Convert::setFloat( std::string s ) {
	char		*endPtr;
	float		tmp;

	tmp = strtof(s.c_str(), &endPtr);
	if (*endPtr == 'f' && std::strlen(endPtr) == 1) {
		this->_isFloat = true;
		this->_isEmpty = false;
	}
}

void	Convert::setDouble( std::string s ) {
	char		*endPtr;

	this->_double = strtod(s.c_str(), &endPtr);
	if (*endPtr == '\0' && this->_isChar == false && this->_isInt == false
	&& this->_double >= std::numeric_limits<double>::min()
	&& this->_double <= std::numeric_limits<double>::max()) {
		this->_isDouble = true;
		this->_isEmpty = false;
	}
	else if (this->_isChar == false && this->_isInt == false
	&& this->_isFloat == false && this->_isDouble == false)
		this->_isEmpty = true;
}

void	Convert::setTypes() {
	this->setChar(this->_toConvert);
	this->setInt(this->_toConvert);
	this->setFloat(this->_toConvert);
	this->setDouble(this->_toConvert);
}

void	Convert::getChar( double n ) const {
	std::cout << "char: ";
	if (this->_isEmpty == false
	&& n >= std::numeric_limits<char>::min()
	&& n <= std::numeric_limits<char>::max()) {
		if (isprint(n))
			std::cout << static_cast<char>(n) << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void	Convert::getInt( double n ) const {
	std::cout << "int: ";
	if (this->_isEmpty == false
	&& n >= std::numeric_limits<int>::min()
	&& n <= std::numeric_limits<int>::max())
		std::cout << static_cast<int>(n) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	Convert::getFloat( double n ) const {
	std::cout << "float: ";
	if (this->_isEmpty == false
	&& n >= std::numeric_limits<float>::min()
	&& n <= std::numeric_limits<float>::max())
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(n)
		<< 'f' << std::endl;
	else if (this->_toConvert == "nan" || this->_toConvert == "-inf" || this->_toConvert == "+inf")
		std::cout << this->_toConvert << 'f' << std::endl;
	else if (this->_toConvert == "nanf" || this->_toConvert == "-inff" || this->_toConvert == "+inff")
		std::cout << this->_toConvert << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	Convert::getDouble( double n ) const {
	std::cout << "double: ";
	if (this->_isEmpty == false
	&& n >= std::numeric_limits<double>::min()
	&& n <= std::numeric_limits<double>::max()) {
		if (this->_toConvert.at(0) == '-')
			std::cout << '-' << std::fixed << std::setprecision(1) << static_cast<double>(-n) << std::endl;
		else
			std::cout << std::fixed << std::setprecision(1) << static_cast<double>(n) << std::endl;
	}
	else if (this->_toConvert == "nan" || this->_toConvert == "-inf" || this->_toConvert == "+inf"
	|| this->_toConvert == "nanf" || this->_toConvert == "-inff" || this->_toConvert == "+inff")
		std::cout << this->_toConvert << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	Convert::getConvert() {
	this->getChar(this->_double);
	this->getInt(this->_double);
	this->getFloat(this->_double);
	this->getDouble(this->_double);
}
