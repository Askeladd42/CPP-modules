/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:48:47 by plam              #+#    #+#             */
/*   Updated: 2022/08/18 14:37:23 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( std::string name, int gradeExc, int gradeSgn ) {
	try {
		if (gradeExc < 1)
			throw Form::GradeTooHighException;
		if (gradeSgn > 150)
			throw Form::GradeTooLowException;
		else {
			this->_name = name;
			this->_signed = false;
			this->_gradeExc = gradeExc;
			this->_gradeSgn = gradeSgn;
			std::cout << "Format " << _name << " created" << std::endl;
		}
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
}

Form::~Form( void ) {
	std::cout << "Format " << _name << " destroyed" << std::endl;
}

Form::Form( Form const &other ) {
	*this = other;
}

Form&	Form::operator=( Form const &other ) {
	if (this != &other) {
		this->_name = other._name;
		this->_signed = other._signed;
		this->_gradeExc = other._gradeExc;
		this->_gradeSgn = other._gradeSgn;
	}
	return *this;
}

Form&	Form::operator<<( Form const &other ) {
	this->_name = other._name;
	this->_signed = other._signed;
	this->_gradeExc = other._gradeExc;
	this->_gradeSgn = other._gradeSgn;
	return *this;
}


std::string	Form::getName() {
	return _name;
}

bool	Form::getSgn() {
	return _signed;
}

int	Form::getGradeExc() {
	return _gradeExc;
}

int	Form::getGradeSgn() {
	return _gradeSgn;
}

void	Form::beSigned( Bureaucrat b ) {
	if ( this->getSgn() == false ) {
		if ( this->getGradeSgn() >= b->getGrade())
			std::cout << b->getName() << " signed " << this->getName()
				<< std::endl;
		else
			std::cout << b->getName() << " couldn't sign " << this->getName()
				<< " because " << std::endl;
	}
	else
		std::cout << "The format " << this->getName() << " is already signed !" << std::endl;
}