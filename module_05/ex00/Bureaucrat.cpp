/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:28:19 by plam              #+#    #+#             */
/*   Updated: 2022/08/20 16:31:25 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ) {
	try {
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException;
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException;
		else {
			_name = name;
			_grade = grade;
			std::cout << "New bureaucrat " << _name << " recruited in the "
	 		<< "company with the grade " << _grade << std::endl;
		}
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucrat " << _name << " fired from his post." << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const &other ) {
	*this = other;
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const &other ) {
	if (this != &other) {
		this->_grade = other._grade;
		this->_name = other._name;
	}
	return *this;
}

std::ostream	&operator<<( std::ostream &ofs, Bureaucrat &b ) {
	ofs << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return ofs;
}

std::string	Bureaucrat::getName() {
	return _name;
}

int	Bureaucrat::getGrade() {
	return _grade;
}

void	Bureaucrat::incrGrade() {
	try {
		if (this->_grade < 2)
			throw Bureaucrat::GradeTooHighException;
		else {
			this->_grade--;
			std::cout << "Bureaucrat " << _name << "'s grade has been increased !"
				<< std::endl;
		}
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::decrGrade() {
	try {
		if (this->_grade > 149)
			throw Bureaucrat::GradeTooLowException;
		else {
			this->_grade++;
			std::cout << "Bureaucrat " << _name << "'s grade has been decreased !"
				<< std::endl;
		}
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
}
