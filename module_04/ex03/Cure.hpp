/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:35:34 by plam              #+#    #+#             */
/*   Updated: 2022/08/17 11:16:45 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
# define __CURE_HPP__

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure( void );
	virtual ~Cure( void );
	Cure( Cure const &other );
	Cure	&operator=( Cure const &other );

	virtual Cure*	clone() const;
	virtual void	use( ICharacter &target );
};

#endif