/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:27:24 by plam              #+#    #+#             */
/*   Updated: 2022/08/23 12:11:18 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void ) {
	Bureaucrat*	Tom = new Bureaucrat("Tom", 75);
	Bureaucrat*	Jerry = new Bureaucrat("Jerry", 20);
	Bureaucrat*	Marcel = new Bureaucrat("Marcel", 145);

	Tom->incrGrade();
	Tom->decrGrade();
	
	Form*	Engram = new Form("Engram", 30, 25);
	std::cout << Engram->getSgn() << std::endl;
	Tom->signForm(*Engram);
	Jerry->signForm(*Engram);
	Marcel->signForm(*Engram);
	std::cout << Engram->getSgn() << std::endl;
	delete (Engram);

	Bureaucrat*	BigBoss = new Bureaucrat("Big Boss", 1);
	Form*		Priority = new Form("Prior Task", 1, 1);

	std::cout << *BigBoss;
	BigBoss->incrGrade();

	Tom->signForm(*Priority);
	Jerry->signForm(*Priority);
	Marcel->signForm(*Priority);
	BigBoss->signForm(*Priority);

	delete(Priority);
	delete(Tom);
	delete(Jerry);
	delete(Marcel);
	delete(BigBoss);

	return 0;
}