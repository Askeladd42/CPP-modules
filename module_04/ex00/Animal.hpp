/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:12:33 by plam              #+#    #+#             */
/*   Updated: 2022/06/23 15:15:18 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal(/* args */);
	~Animal();
};

Animal::Animal( void )
{
}

Animal::~Animal()
{
}


#endif