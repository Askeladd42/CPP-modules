/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:19:22 by plam              #+#    #+#             */
/*   Updated: 2022/09/03 17:36:16 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form(target, 25, 5) { }

PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &other ) : Form(other) { }

PresidentialPardonForm&	PresidentialPardonForm::operator=( PresidentialPardonForm const &other ) {
	if (this != &other)
		std::cout << "You can't assign this concrete class !" << std::endl;
	return (*this);
}

void	PresidentialPardonForm::execute( Bureaucrat const &executor ) const {
	Form::execute(executor);
	std::cout << this->getName() << " has been forgiven by Zaphod Beeblebrox." << std::endl;
}