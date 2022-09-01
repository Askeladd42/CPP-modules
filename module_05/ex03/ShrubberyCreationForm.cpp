/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:20:04 by plam              #+#    #+#             */
/*   Updated: 2022/09/01 12:45:41 by plam             ###   ########.fr       */
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
	std::ofstream	ofs((this->getName() + "_shrubbery").c_str());
	ofs << "               ,@@@@@@@, " << std::endl;
	ofs << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	ofs << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\88/8o" << std::endl;
	ofs << "   ,%&\%&&%&&%,@@@\@@@/@@@88\88888/88'"<< std::endl;
	ofs << "   %&&%&%&/%&&%@@\@@/ /@@@88888\88888'" << std::endl;
	ofs << "   %&&%/ %&%%&&@@\ V /@@' `88\8 `/88'" << std::endl;
	ofs << "   `&%\ ` /%&'    |.|        \ '|8'" << std::endl;
	ofs << "       |o|        | |         | |" << std::endl;
	ofs << "       |.|        | |         | |" << std::endl;
	ofs << " \\/ ._\//_/__/  ,\_//__\\/.  \_//__/_" << std::endl;
	ofs.close();
}

