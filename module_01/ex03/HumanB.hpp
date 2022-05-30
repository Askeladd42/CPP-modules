/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:06:15 by plam              #+#    #+#             */
/*   Updated: 2022/05/30 12:45:05 by plam             ###   ########.fr       */
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
	HumanB( void );
	~HumanB( void );

	void	attack( void );
};
