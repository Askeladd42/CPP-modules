/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:14:05 by plam              #+#    #+#             */
/*   Updated: 2022/09/06 16:26:32 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("robotomy request", 72, 45) {
	this->setTarget(target);
}

RobotomyRequestForm::~RobotomyRequestForm() { }

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &other ) : Form(other) { }

RobotomyRequestForm&	RobotomyRequestForm::operator=( RobotomyRequestForm const &other ) {
	if (this != &other)
		std::cout << "You can't assign this concrete class !" << std::endl;
	return (*this);
}

void	RobotomyRequestForm::execute( Bureaucrat const &executor ) const {
	Form::execute(executor);
	if (this->getGradeExc() > executor.getGrade() && this->getSgn() == true) {
		std::cout << "* Drill noises *" << std::endl;

		std::srand(std::time(0) + std::rand() % 1000);
		int	randNb = std::rand() % 2;

		if (randNb == 0)
			std::cout << "The operation of "<< this->getTarget() << " has failed."<< std::endl;
		else
			std::cout << this->getTarget() << " has been succesfully robotomized !" << std::endl;
	}
}