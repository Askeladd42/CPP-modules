/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:31:38 by plam              #+#    #+#             */
/*   Updated: 2022/09/13 17:34:02 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ) {
	ClapTrap	*Timmy = new ClapTrap("Timmy");
	ScavTrap	*Jimmy = new ScavTrap("Jimmy");

	Timmy->displayStatus();
	Jimmy->displayStatus();
	std::cout << std::endl;

	Timmy->attack( "a pile of bricks" );
	Timmy->takeDamage( 5 );
	Timmy->beRepaired( 3 );
	Timmy->takeDamage( 8 );

	Jimmy->attack( "Scavenger" );
	Jimmy->takeDamage( 25 );
	Jimmy->beRepaired( 20 );
	Jimmy->guardGate();
	Jimmy->takeDamage( 100 );

	Timmy->displayStatus();
	Jimmy->displayStatus();

	delete(Timmy);
	delete(Jimmy);
	return 0;
}
