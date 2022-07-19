/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:27 by plam              #+#    #+#             */
/*   Updated: 2022/07/19 15:14:56 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain*	_mind;
public:
	Cat( void );
	virtual ~Cat( void );
	Cat( Cat const &other );
	Cat	&operator=( Cat const &other );

	virtual void	makeSound( void ) const;
	virtual void	printIdeas( void ) const;
};

#endif