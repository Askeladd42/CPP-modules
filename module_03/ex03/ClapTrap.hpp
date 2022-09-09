/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 12:37:33 by plam              #+#    #+#             */
/*   Updated: 2022/09/09 18:27:04 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H__
# define __CLAPTRAP_H__

# include <iostream>

class ClapTrap
{
protected:
	std::string		_name;
	int				_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	ClapTrap( std::string name );
	~ClapTrap( void );
	ClapTrap( ClapTrap const &other );
	ClapTrap &operator=( ClapTrap const &other );

	void	setHP( int HP );
	void	setEP( unsigned int EP );
	void	setAP( unsigned int AP );

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	
	void	displayStatus( void ) const;
};

#endif