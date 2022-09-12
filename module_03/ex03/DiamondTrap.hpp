/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:31:38 by plam              #+#    #+#             */
/*   Updated: 2022/09/12 13:47:32 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
# define  __DIAMONDTRAP_HPP__

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
private:
	std::string	_name;

public:
	DiamondTrap( std::string name );
	~DiamondTrap( void );
	DiamondTrap( DiamondTrap const &other );
	DiamondTrap	&operator=( DiamondTrap const &other );

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void	guardMode( void );
	void	highFivesGuys( void );
	void	whoAmI( void );

	void	displayStatus( void );
};


#endif