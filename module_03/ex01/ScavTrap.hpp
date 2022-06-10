/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:29:43 by plam              #+#    #+#             */
/*   Updated: 2022/06/10 16:10:39 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
private:
	std::string		_name;
	int				_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	ScavTrap( std::string name );
	~ScavTrap( void );
	
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	guardGate( void );
};

#endif