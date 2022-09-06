/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:47:52 by plam              #+#    #+#             */
/*   Updated: 2022/09/06 17:43:23 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

convert::convert( std::string elm ) {
	this->toConvert = elm;
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