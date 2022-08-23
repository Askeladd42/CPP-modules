/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:51:43 by plam              #+#    #+#             */
/*   Updated: 2022/08/23 13:03:15 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.cpp"

Intern::Intern() {
	std::cout << "An intern is recruited." << std::endl;
}

Intern::~Intern() {
	std::Cout << "An intern is fired from his post." << std::endl;
}

Form*	makeForm(std::string fName, std::string fTarget) {
	std::cout << "Intern creates " << fName << std::endl;
}
