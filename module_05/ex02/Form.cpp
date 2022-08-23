/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:48:47 by plam              #+#    #+#             */
/*   Updated: 2022/08/23 18:54:52 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( std::string name, int gradeSgn, int gradeExc) : _name(name), _gradeExc(gradeExc), _gradeSgn(gradeSgn) {
	try {
		if (gradeExc < 1 || gradeSgn < 1)
			throw Form::GradeTooHighException;
		if (gradeSgn > 150 || gradeExc > 150)
			throw Form::GradeTooLowException;
		else {
			this->_signed = false;
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

Form::Form( Form const &other ) : _name(other._name), _gradeExc(_gradeExc), _gradeSgn(_gradeSgn) { }

Form&	Form::operator=( Form const &other ) {
	if (this != &other)
		this->_signed = other._signed;
	return *this;
}

std::ostream	&operator<<( std::ostream &ofs, Form &f ) {
	ofs << f.getName() << ", format with : " << std::endl << "- grade to sign : " << f.getGradeSgn()
		<< std::endl << "- grade to execute : " << f.getGradeExc() << std::endl << "- signed ? ";
	if (f.getSgn() == true)
		ofs << "Yes";
	else
		ofs << "No";
	ofs << std::endl;
	return ofs;
}


std::string const	Form::getName() const {
	return _name;
}

bool	Form::getSgn() const {
	return _signed;
}

int	Form::getGradeExc() const {
	return _gradeExc;
}

int	Form::getGradeSgn() const {
	return _gradeSgn;
}

void	Form::beSigned( Bureaucrat b ) {
	try {
		if (this->getGradeSgn() >= b.getGrade()) {
			this->_signed = true;
		}
		else
			throw GradeTooLowException;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}