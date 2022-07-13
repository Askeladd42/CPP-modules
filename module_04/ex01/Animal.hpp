/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:12:33 by plam              #+#    #+#             */
/*   Updated: 2022/07/13 18:57:47 by plam             ###   ########.fr       */
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
	Animal( void );
	virtual ~Animal( void );
	Animal( Animal const &other );
	Animal	&operator=( Animal const &other );

	virtual std::string	getType( void ) const;
	virtual void		makeSound( void ) const;
	virtual void		printIdeas( void ) const { };
};


#endif