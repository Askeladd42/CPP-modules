/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:56:39 by plam              #+#    #+#             */
/*   Updated: 2022/08/17 13:49:48 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter {
private:
	std::string const	c_name;
	AMateria*			c_inv[4];
	AMateria*			c_floor[50];
	void				drop( AMateria* m );
public:
	Character( std::string name );
	virtual ~Character();
	Character( Character const &other );
	Character &operator=( Character const &other );

	virtual std::string const &getName() const;
	void	equip( AMateria* m );
	void	unequip( int idx );
	void	use( int idx, ICharacter& target );
};

#endif