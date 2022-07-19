/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:27 by plam              #+#    #+#             */
/*   Updated: 2022/07/19 15:14:01 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain*	_mind;
public:
	Dog( void );
	virtual ~Dog( void );
	Dog( Dog const &other );
	Dog	&operator=( Dog const &other );

	virtual void	makeSound( void ) const;
	virtual void	printIdeas( void ) const;
};

#endif