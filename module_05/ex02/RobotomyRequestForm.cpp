/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:14:05 by plam              #+#    #+#             */
/*   Updated: 2022/09/03 16:58:58 by plam             ###   ########.fr       */
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
	std::cout << "* Drill noises *" << std::endl;
	
	int	randNb = rand() % 2;
	
	if (randNb == 0)
		std::cout << "The operation of "<< this->getName() << " has failed."<< std::endl;
	else
		std::cout << this->getName() << " has been succesfully robotomized !" << std::endl;
}