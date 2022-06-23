/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:31:38 by plam              #+#    #+#             */
/*   Updated: 2022/06/23 14:55:45 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void ) {
	ClapTrap	Timmy("Timmy");
	ScavTrap	Jimmy("Jimmy");
	FragTrap	Manny("Manny");
	DiamondTrap Mark("Mark");

	Timmy.attack( "a pile of bricks" );
	Timmy.takeDamage(5);
	Timmy.beRepaired(3);
	Timmy.takeDamage(8);

	Jimmy.attack( "Scavenger" );
	Jimmy.takeDamage( 25 );
	Jimmy.beRepaired( 20 );
	Jimmy.guardGate();
	Jimmy.takeDamage( 100 );

	Manny.attack( "Scavenger" );
	Manny.takeDamage( 25 );
	Manny.beRepaired( 20 );
	Manny.highFivesGuys();
	Manny.takeDamage( 100 );

	Mark.attack( "Scavenger" );
	Mark.takeDamage( 30 );
	Mark.beRepaired( 25 );
	Mark.highFivesGuys();
	Mark.whoAmI();

	std::cout << "By a miracle, Scavenger destroyed itself !" << std::endl; 
	return 0;
}
