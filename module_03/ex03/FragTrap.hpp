/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:01:17 by plam              #+#    #+#             */
/*   Updated: 2022/06/23 14:35:35 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	std::string		_name;
	int				_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
	
public:
	FragTrap( std::string name );
	~FragTrap( void );
	FragTrap( FragTrap const &other );
	FragTrap	&operator=( FragTrap const &other );

/*
** setters
*/
	void	setDefaultHP( void ) {
		this->_hitPoints = 100;
	}

	void	setDefaultEP( void ) {
		this->_energyPoints = 100;
	}
	void	setAtkPts( void ) {
		this->_attackDamage = 30;
	}

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void	highFivesGuys( void );

};



#endif