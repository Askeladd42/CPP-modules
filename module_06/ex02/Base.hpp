/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:59:52 by plam              #+#    #+#             */
/*   Updated: 2022/09/28 14:18:45 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE_HPP__
# define __BASE_HPP__

# include <iostream>
# include <cstdlib>
# include <exception>

class Base {
public:
	virtual ~Base();
};

Base	*generate( void );
void	identify( Base* p );
void	identify( Base& p );

#endif