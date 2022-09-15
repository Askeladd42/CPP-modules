/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:59:09 by plam              #+#    #+#             */
/*   Updated: 2022/09/15 23:59:51 by plam             ###   ########.fr       */
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
	~WrongAnimal();
	WrongAnimal( std::string type );
	WrongAnimal( WrongAnimal const &other );
	WrongAnimal &operator=(WrongAnimal const &other );

	virtual void		makeSound( void ) const;
};

#endif