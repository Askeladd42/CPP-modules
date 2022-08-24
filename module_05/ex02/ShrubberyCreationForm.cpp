/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:20:04 by plam              #+#    #+#             */
/*   Updated: 2022/08/24 12:27:25 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form(target, 145, 137) { }

ShrubberyCreationForm::~ShrubberyCreationForm() { }

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &other) : Form(other) { }

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( ShrubberyCreationForm const &other ) {
	
}

/* should add an ascii tree in the generated file :


     ccee88oo
  C8O8O8Q8PoOb o8oo
 dOB69QO8PdUOpugoO9bD
CgggbU8OU qOp qOdoUOdcb
    6OuU  /p u gcoUodpP
      \\\//  /douUP
        \\\////
         |||/\
         |||\/
         |||||
   .....//||||\....
*/