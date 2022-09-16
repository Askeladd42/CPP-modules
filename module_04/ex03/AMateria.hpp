/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:30:19 by plam              #+#    #+#             */
/*   Updated: 2022/09/16 15:44:28 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__

# include <iostream>
# include "ICharacter.hpp"

class AMateria {
protected:
	std::string	type;
public:
	AMateria( void );
	AMateria( std::string const &type );
	virtual	~AMateria( void );
	AMateria( AMateria const &other );
	AMateria &operator=( AMateria const &other );
	
	std::string const &getType() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use( ICharacter& target );
};

#endif