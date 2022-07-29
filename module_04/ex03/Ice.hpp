/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:34:18 by plam              #+#    #+#             */
/*   Updated: 2022/07/29 18:29:52 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
# define __ICE_HPP__

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice( void );
	virtual ~Ice( void );
	Ice( Ice const &other );
	Ice	&operator=( Ice const &other );

	virtual Ice*	clone() const;
	virtual void	use( ICharacter &target ) const;
};

#endif