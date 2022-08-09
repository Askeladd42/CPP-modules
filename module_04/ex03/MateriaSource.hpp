/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:46:13 by plam              #+#    #+#             */
/*   Updated: 2022/08/09 13:03:45 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	m_slot[4];
public:
	MateriaSource( void );
	virtual ~MateriaSource( void );
	MateriaSource( MateriaSource const &other );
	MateriaSource &operator=( MateriaSource const &other );

	void		learnMateria(AMateria* m);
	AMateria*	createMateria( std::string const &type );
};

#endif