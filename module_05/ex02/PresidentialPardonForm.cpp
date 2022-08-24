/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:19:22 by plam              #+#    #+#             */
/*   Updated: 2022/08/24 15:19:16 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form(target, 25, 5) { }

PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &other ) : Form(other) { }

PresidentialPardonForm&	PresidentialPardonForm::operator=( PresidentialPardonForm const &other ) {
	
}

void	PresidentialPardonForm::execute( Bureaucrat const &executor ) const {
	std::cout << this->getName() << " has been forgiven by Zaphod Beeblebrox." << std::endl;
}