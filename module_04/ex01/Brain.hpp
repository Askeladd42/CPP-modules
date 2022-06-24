/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:01:31 by plam              #+#    #+#             */
/*   Updated: 2022/06/24 18:06:20 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_CPP__
# define __BRAIN_CPP__

# include <iostream>

class Brain
{
public:
	Brain( void );
	~Brain( void );

	std::string	ideas[100];
};

#endif