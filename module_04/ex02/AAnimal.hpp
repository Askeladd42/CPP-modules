/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:12:33 by plam              #+#    #+#             */
/*   Updated: 2022/07/13 18:57:47 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AANIMAL_HPP__
# define __AANIMAL_HPP__

# include <iostream>

class AAnimal
{
protected:
	std::string type;
public:
	AAnimal( void );
	virtual ~AAnimal( void );
	AAnimal( AAnimal const &other );
	AAnimal	&operator=( AAnimal const &other );

	void				setType( std::string newType );
	virtual std::string	getType( void ) const;
	virtual void		makeSound( void ) const;
	virtual void		printIdeas( void ) const=0;	//fully virtual funcion
};


#endif