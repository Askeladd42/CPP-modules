/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:14:05 by plam              #+#    #+#             */
/*   Updated: 2022/08/24 15:28:49 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form(target, 72, 45) { }

RobotomyRequestForm::~RobotomyRequestForm() { }

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &other ) : Form(other) { }

RobotomyRequestForm&	RobotomyRequestForm::operator=( RobotomyRequestForm const &other ) {
	
}

void	RobotomyRequestForm::execute( Bureaucrat const &executor ) const {
	Form::execute(executor);
}