/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:27:24 by plam              #+#    #+#             */
/*   Updated: 2022/08/17 16:00:48 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ) {
	Bureaucrat*	Tom = new Bureaucrat("Tom", 75);
	Bureaucrat*	Jerry = new Bureaucrat("Jerry", 200);
	Bureaucrat*	Marcel = new Bureaucrat("Marcel", -15);

	Tom->incrGrade();
	Tom->decrGrade();
	return 0;
}