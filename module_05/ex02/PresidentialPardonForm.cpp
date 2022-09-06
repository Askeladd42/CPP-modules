/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:19:22 by plam              #+#    #+#             */
/*   Updated: 2022/09/06 16:44:30 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("presidential pardon", 25, 5) {
	this->setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &other ) : Form(other) { }

PresidentialPardonForm&	PresidentialPardonForm::operator=( PresidentialPardonForm const &other ) {
	if (this != &other)
		std::cout << "You can't assign this concrete class !" << std::endl;
	return (*this);
}

void	PresidentialPardonForm::execute( Bureaucrat const &executor ) const {
	Form::execute(executor);
	if (this->getGradeExc() > executor.getGrade() && this->getSgn() == true)
		std::cout << this->getTarget() << " has been forgiven by Zaphod Beeblebrox." << std::endl;
}