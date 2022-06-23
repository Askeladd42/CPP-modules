/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:12:33 by plam              #+#    #+#             */
/*   Updated: 2022/06/23 16:23:58 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <iostream>

class Animal
{
protected:
	std::string _type;
public:
	Animal( std::string name );
	~Animal( void );
	Animal( Animal const &other );
	Animal	&operator=( Animal const &other );
};


#endif