/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:01:17 by plam              #+#    #+#             */
/*   Updated: 2022/06/13 16:10:20 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
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
	FragTrap	&operator=(FragTrap const &other);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	highFivesGuys(void);

};



#endif