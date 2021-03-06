/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:38:18 by plam              #+#    #+#             */
/*   Updated: 2022/06/02 11:55:59 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
# define __HARL_HPP__

# include <iostream>
# include <string>

class Harl
{
private:

	std::string	log[4];

	void		_debug( void );
	void		_info( void );
	void		_warning( void );
	void		_error( void );

public:
	Harl( void );
	~Harl( void );

	void	complain( std::string level);
};
#endif