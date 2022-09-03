/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:51:43 by plam              #+#    #+#             */
/*   Updated: 2022/09/03 18:34:20 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "An intern is recruited." << std::endl;
}

Intern::~Intern() {
	std::cout << "An intern is fired from his post." << std::endl;
}

Form*	Intern::makeForm(std::string fName, std::string fTarget) {
	try {
		for (int i = 0; i < 3; i++) {
			if (/* i matches with the compare with one of the format table element name */)
				std::cout << "Intern creates " << fName << std::endl;
			else {
				std::cerr << "Can't create the " << fName << " format : ";
				throw FormatNonExistent;
			}
		}
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
}
