/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:31:38 by plam              #+#    #+#             */
/*   Updated: 2022/09/12 17:25:17 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
# define  __DIAMONDTRAP_HPP__

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	_name;

public:
	DiamondTrap( std::string name );
	~DiamondTrap( void );
	DiamondTrap( DiamondTrap const &other );
	DiamondTrap	&operator=( DiamondTrap const &other );

	void	attack( std::string const &target );
	void	whoAmI( void );
};

#endif