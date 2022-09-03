/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:27:24 by plam              #+#    #+#             */
/*   Updated: 2022/09/03 15:26:28 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void ) {
	Bureaucrat*	Tom = new Bureaucrat("Tom", 75);
	Bureaucrat*	Jerry = new Bureaucrat("Jerry", 20);
	Bureaucrat*	Marcel = new Bureaucrat("Marcel", 145);

	std::cout << *Tom << *Jerry << *Marcel;

	Form*	Engram = new Form("Engram", 30, 25);
	std::cout << Engram->getSgn() << std::endl;
	
	Tom->signForm(*Engram);
	std::cout << *Engram;

	Jerry->signForm(*Engram);
	std::cout << *Engram;
	
	Marcel->signForm(*Engram);
	std::cout << *Engram;
	
	delete (Engram);

	Bureaucrat*	BigBoss = new Bureaucrat("Big Boss", 1);
	ShrubberyCreationForm*	Shrub = new ShrubberyCreationForm("Shrub");

	std::cout << *Shrub;

	Tom->signForm(*Shrub);
	Jerry->signForm(*Shrub);
	Marcel->signForm(*Shrub);
	
	BigBoss->incrGrade();
	std::cout << *BigBoss;
	BigBoss->signForm(*Shrub);
	std::cout << *Shrub;
	
	Tom->executeForm(*Shrub);
	BigBoss->executeForm(*Shrub);

	delete(Shrub);
	delete(Tom);
	delete(Jerry);
	delete(Marcel);
	delete(BigBoss);

	return 0;
}