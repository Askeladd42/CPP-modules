/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:59:09 by plam              #+#    #+#             */
/*   Updated: 2022/09/16 12:39:56 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal( std::string type );
	WrongAnimal( WrongAnimal const &other );
	WrongAnimal &operator=(WrongAnimal const &other );

	void		setType( std::string newType );
	std::string	getType( void ) const;
	void		makeSound( void ) const;
};

#endif