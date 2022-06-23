/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:27 by plam              #+#    #+#             */
/*   Updated: 2022/06/23 16:29:49 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "Animal.hpp"

class Dog : virtual Animal
{
private:
	std::string _type
public:
	Dog( void );
	~Dog( void );
	Dog( Dog const &other );
	Dog	&operator=( Dog const &other );
};

	void	getType( void );
	void	makeSound( void );

#endif