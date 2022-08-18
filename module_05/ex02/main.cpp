/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:27:24 by plam              #+#    #+#             */
/*   Updated: 2022/08/18 15:49:29 by plam             ###   ########.fr       */
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
	Engram->beSigned(*Tom);
	Engram->beSigned(*Jerry);
	Engram->beSigned(*Marcel);
	std::cout << Engram->getSgn() << std::endl;

	Bureaucrat*	BigBoss = new Bureaucrat("Big Boss", 1);
	Form*		Priority = new Form("Priority Task", 1, 1);

	BigBoss->getName();
	BigBoss->getGrade();
	BigBoss->incrGrade();

	Priority->beSigned(*Tom);
	Priority->beSigned(*Jerry);
	Priority->beSigned(*Marcel);
	Priority->beSigned(*BigBoss);
	return 0;
}