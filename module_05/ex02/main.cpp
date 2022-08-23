/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:27:24 by plam              #+#    #+#             */
/*   Updated: 2022/08/23 17:23:15 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void ) {
	Bureaucrat*	Tom = new Bureaucrat("Tom", 75);
	Bureaucrat*	Jerry = new Bureaucrat("Jerry", 20);
	Bureaucrat*	Marcel = new Bureaucrat("Marcel", 145);

	std::cout << *Tom << *Jerry << *Marcel;

	Form*	Engram = new Form("Engram", 30, 25);
	std::cout << Engram->getSgn() << std::endl;
	
	Tom->signForm(Engram);
	Jerry->signForm(Engram);
	Marcel->signForm(Engram);
	std::cout << Engram->getSgn() << std::endl;

	Bureaucrat*	BigBoss = new Bureaucrat("Big Boss", 1);
	Form*		Priority = new Form("Prior Task", 1, 1);

	std::cout << Priority;

	Tom->signForm(Priority);
	Jerry->signForm(Priority);
	Marcel->signForm(Priority);

	std::cout << BigBoss;
	BigBoss->signForm(Priority);

	delete(Priority);
	delete(Tom);
	delete(Jerry);
	delete(Marcel);
	delete(BigBoss);

	return 0;
}