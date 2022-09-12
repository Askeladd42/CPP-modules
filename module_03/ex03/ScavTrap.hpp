/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:29:43 by plam              #+#    #+#             */
/*   Updated: 2022/09/12 16:37:43 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap( std::string name );
	virtual ~ScavTrap( void );
	ScavTrap( ScavTrap const &other );
	ScavTrap	&operator=(ScavTrap const &other);

	virtual void	attack( std::string const &target );
	void			takeDamage( unsigned int amount );
	void			beRepaired( unsigned int amount );

	void			guardGate( void );
};

#endif