/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:20:04 by plam              #+#    #+#             */
/*   Updated: 2022/08/30 17:02:58 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form(target, 145, 137) { }

ShrubberyCreationForm::~ShrubberyCreationForm() { }

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &other) : Form(other) { }

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( ShrubberyCreationForm const &other ) {
	
}

void	ShrubberyCreationForm::execute( Bureaucrat const &executor ) const {
	Form::execute(executor);
	if ( executor.getGrade() <= this->getGradeExc() ) {
		std::ofstream	ofs(this->getName().c_str());
/* should add an ascii tree in the generated file :
		ofs <<      ccee88oo		      ccee88oo			      ccee88oo			      ccee88oo << std::endl;
		ofs <<   C8O8O8Q8PoOb o8oo	   C8O8O8Q8PoOb o8oo	   C8O8O8Q8PoOb o8oo	   C8O8O8Q8PoOb o8oo << std::endl;
		ofs <<  dOB69QO8PdUOpugoO9b	  dOB69QO8PdUOpugoO9bD	  dOB69QO8PdUOpugoO9bD	  dOB69QO8PdUOpugoO9bD << std::endl;
		ofs << CgggbU8OU qOp qOdoUOdcb CgggbU8OU qOp qOdoUOdcb CgggbU8OU qOp qOdoUOdcb CgggbU8OU qOp qOdoUOdcb << std::endl;
		ofs <<     6OuU  /p u gcoUodpP     6OuU  /p u gcoUodpP     6OuU  /p u gcoUodpP     6OuU  /p u gcoUodpP << std::endl;
		ofs <<       \\\//  /douUP	       \\\//  /douUP	       \\\//  /douUP	       \\\//  /douUP << std::endl;
		ofs <<         \\\////		         \\\////		         \\\////		         \\\//// << std::endl;
		ofs <<          |||/\		          |||/\			          |||/\			          |||/\ << std::endl;
		ofs <<          |||\/		          |||\/			          |||\/			          |||\/ << std::endl;
		ofs <<          |||||		          |||||			          |||||			          ||||| << std::endl;
		ofs <<    .....//||||\....	    .....//||||\....	    .....//||||\....	    .....//||||\.... << std::endl;
		ofs.close();
*/
	}
}

