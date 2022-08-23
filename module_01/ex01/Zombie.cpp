/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:12:44 by plam              #+#    #+#             */
/*   Updated: 2022/08/23 10:34:44 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "A Zombie has been created !" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " got obliterated !" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

void	Zombie::add_name(std::string name) {
	this->_name = name;
	std::cout << "This zombie is named ... " << this->_name << std::endl;
	return ;
}