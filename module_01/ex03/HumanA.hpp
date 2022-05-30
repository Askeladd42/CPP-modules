/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:06:15 by plam              #+#    #+#             */
/*   Updated: 2022/05/30 14:31:56 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__

class HumanA
{
private:
	std::string	_name;
	Weapon		_weapon;
	
public:
	HumanA( std::string name );
	~HumanA( void );
	
	void	attack( void );
};



#endif