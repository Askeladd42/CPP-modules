/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:01:17 by plam              #+#    #+#             */
/*   Updated: 2022/06/10 17:03:49 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
private:
	/* data */
public:
	FragTrap( std::string name );
	~FragTrap( void );
};

FragTrap::FragTrap(std::string name) {
}

FragTrap::~FragTrap()
{
}


#endif