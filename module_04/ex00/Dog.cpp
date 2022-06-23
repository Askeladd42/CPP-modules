/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:13 by plam              #+#    #+#             */
/*   Updated: 2022/06/23 16:32:36 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog constructor called." << std::endl; 
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called." << std::endl;
}


void	Dog::makeSound( void ) {
	std::cout << "Wouaf !" << std::endl;
}