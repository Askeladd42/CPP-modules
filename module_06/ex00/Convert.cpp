/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:47:52 by plam              #+#    #+#             */
/*   Updated: 2022/09/23 13:52:29 by plam             ###   ########.fr       */
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
		this->_char = static_cast<char>(s.at(0));
	}
	else if (s.size() == 0)
		this->_isEmpty = true;
}

void	Convert::setInt( std::string s ) {
	char		*pos;
	long int	tmp;

	if (s.at(0) == '-')
		tmp = strtol(s.c_str(), &pos, 11);
	else
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
	if (*pos == 'f' && std::strlen(pos) == 1 
	&& tmp >= std::numeric_limits<float>::min()
	&& tmp <= std::numeric_limits<float>::max())
		this->_isFloat = true;
}

void	Convert::setDouble( std::string s ) {
	char		*pos;

	this->_double = strtod(s.c_str(), &pos);
	if (*pos == '\0' && this->_isChar == false && this->_isInt == false
	&& this->_double >= std::numeric_limits<double>::min()
	&& this->_double <= std::numeric_limits<double>::max()) {
		this->_isDouble = true;
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

void	Convert::getChar() const {
	std::cout << "char: ";
	if (this->_isEmpty == false
	&& this->_char >= std::numeric_limits<char>::min()
	&& this->_char <= std::numeric_limits<char>::max()) {
		if (isprint(this->_char) && this->_char != '0')
			std::cout << this->_char << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
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
	if (this->_isDouble == true
	&& n >= std::numeric_limits<double>::min()
	&& n <= std::numeric_limits<double>::max())
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(n) << std::endl;
	else if (this->_toConvert == "nan" || this->_toConvert == "-inf" || this->_toConvert == "+inf")
		std::cout << this->_toConvert << std::endl;
	else
		std::cout << "impossible" << std::endl;

}

void	Convert::getConvert() {
	this->getChar();
	this->getInt(this->_double);
	this->getFloat(this->_double);
	this->getDouble(this->_double);
}
