/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:27:24 by plam              #+#    #+#             */
/*   Updated: 2022/09/06 15:15:51 by plam             ###   ########.fr       */
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
	Form*	Garden = new ShrubberyCreationForm("Garden");
	Form*	Tommy = new RobotomyRequestForm("Tommy");
	Form*	Dent = new PresidentialPardonForm("Arthur Dent");
	
	std::cout << *Garden;
	std::cout << *Tommy;
	std::cout << *Dent;

	Tom->signForm(*Tommy);
	Jerry->signForm(*Dent);
	Marcel->signForm(*Garden);
	BigBoss->signForm(*Garden);
	
	BigBoss->incrGrade();
	std::cout << *BigBoss;
	std::cout << *Garden << *Tommy;
	
	Tommy->execute(*Jerry);
	Tommy->execute(*Tom);
	BigBoss->signForm(*Tommy);
	Tommy->execute(*Jerry);
	Tommy->execute(*Tom);

	Garden->execute(*Marcel);
	Dent->execute(*Marcel);

	Garden->execute(*BigBoss);
	Dent->execute(*BigBoss);

	delete(Tommy);
	delete(Dent);
	delete(Garden);
	delete(Tom);
	delete(Jerry);
	delete(Marcel);
	delete(BigBoss);

	return 0;

	return 0;
}