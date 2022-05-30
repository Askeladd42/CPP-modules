/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:06:15 by plam              #+#    #+#             */
/*   Updated: 2022/05/30 14:29:45 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
# define __HUMANB_HPP__

class HumanB
{
private:
	std::string	_name;
	Weapon		_weapon;
	
public:
	HumanB( std::string name );
	~HumanB( void );

	void	attack( void );
};

#endif