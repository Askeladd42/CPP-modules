/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:29:43 by plam              #+#    #+#             */
/*   Updated: 2022/06/23 14:36:23 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	std::string		_name;
	int				_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	ScavTrap( std::string name );
	~ScavTrap( void );
	ScavTrap( ScavTrap const &other );
	ScavTrap	&operator=( ScavTrap const &other );

/*
** setters
*/
	void	setDefaultHP( void ) {
		this->_hitPoints = 100;
	}

	void	setDefaultEP( void ) {
		this->_energyPoints = 50;
	}
	void	setAtkPts( void ) {
		this->_attackDamage = 20;
	}

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	void	guardGate( void );
};

#endif