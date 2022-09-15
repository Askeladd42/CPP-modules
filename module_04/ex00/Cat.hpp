/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:27 by plam              #+#    #+#             */
/*   Updated: 2022/09/15 11:56:07 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat( void );
	virtual ~Cat( void );
	Cat( Cat const &other );
	Cat	&operator=( Cat const &other );

	void	makeSound( void ) const;
};

#endif