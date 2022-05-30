/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:59:40 by plam              #+#    #+#             */
/*   Updated: 2022/05/30 14:47:46 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

# include <iostream>
# include <string>

class Weapon
{
private:
	std::string _type;
	
public:
	Weapon( std::string type );
	~Weapon( void );
	std::string	getType( void ) const;
	void	setType(std::string newType);
};

#endif