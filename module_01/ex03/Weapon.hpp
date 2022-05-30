/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:59:40 by plam              #+#    #+#             */
/*   Updated: 2022/05/30 12:56:38 by plam             ###   ########.fr       */
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
	Weapon( void );
	~Weapon( void );
	static std::string& getType( void ) const;
	static void 		setType(std::string newType);
};

#endif