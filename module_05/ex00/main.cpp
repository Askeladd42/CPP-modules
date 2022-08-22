/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:27:24 by plam              #+#    #+#             */
/*   Updated: 2022/08/22 16:29:20 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ) {
	Bureaucrat*	Tom = new Bureaucrat("Tom", 75);
	Bureaucrat*	Jerry;
	Bureaucrat*	Marcel;

	Jerry = new Bureaucrat("Jerry", 200);
	Marcel = new Bureaucrat("Marcel", -15);
	Tom->incrGrade();
	Tom->decrGrade();
	std::cout << Tom->getName() << std::endl;
	std::cout << Tom->getGrade() << std::endl;
	delete(Tom);
	delete(Jerry);
	delete(Marcel);
	return 0;
}