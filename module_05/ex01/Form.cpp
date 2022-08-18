/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:48:47 by plam              #+#    #+#             */
/*   Updated: 2022/08/18 13:01:36 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( std::string name, int gradeExc, int gradeSgn ) {
	
}
Form::~Form( void ) {
	std::cout << "Format " << std::endl;
}
Form::Form( Form const &other );
Form::Form	&operator=( Form const &other );
Form::Form	&operator<<( Bureaucrat const &other );
