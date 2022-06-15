/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:31:38 by plam              #+#    #+#             */
/*   Updated: 2022/06/15 14:26:58 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
# define  __DIAMONDTRAP_HPP__

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : virtual public ClapTrap, virtual public ScavTrap, virtual public FragTrap
{
private:
	std::string		_name;
	int				_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
	
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

};


#endif