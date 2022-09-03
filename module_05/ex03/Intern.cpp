/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:51:43 by plam              #+#    #+#             */
/*   Updated: 2022/09/03 21:23:56 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "An intern is recruited." << std::endl;
}

Intern::~Intern() {
	std::cout << "An intern is fired from his post." << std::endl;
}

Intern::Intern(Intern const &other) {
	*this = other;
}

Intern	&Intern::operator=(Intern const &other) {
	if (this != &other)
		std::cout << "Nothing to copy." << std::endl;
	return *this;
}

const Intern::s_form	Intern::formTab[3] = {
	{"shrubbery creation", &Intern::_shrub},
	{"robotomy request", &Intern::_robot},
	{"presidential pardon", &Intern::_pres}
};

Form*	Intern::makeForm(std::string fName, std::string fTarget) {
	try {
		for (int i = 0; i < 3; i++) {
			if (this->formTab[i].f_name == fName) {
				std::cout << "Intern creates " << fName << std::endl;
				return (this->formTab[i].call(fTarget));
			}
			else {
				std::cerr << "Can't create the " << fName << " format : ";
				throw FormatNonExistent;
				return 0;
			}
		}
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
}
