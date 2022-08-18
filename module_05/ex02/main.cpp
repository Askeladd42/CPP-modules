/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:27:24 by plam              #+#    #+#             */
/*   Updated: 2022/08/18 16:47:28 by plam             ###   ########.fr       */
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

	Bureaucrat*	BigBoss = new Bureaucrat("Big Boss", 1);
	Form*		Priority = new Form("Prior Task", 1, 1);

	std::cout << BigBoss->getName() << std::endl;
	std::cout << BigBoss->getGrade() << std::endl;
	//BigBoss->incrGrade();

	Tom->signForm(*Priority);
	Jerry->signForm(*Priority);
	Marcel->signForm(*Priority);
	BigBoss->signForm(*Priority);

	return 0;
}