/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:02:42 by plam              #+#    #+#             */
/*   Updated: 2022/06/23 16:23:52 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __CAT_HPP__
# define __CAT_HPP__

#include "Animal.hpp"

class Cat : virtual Animal
{
private:
	std::string	_type;
public:
	Cat( std::string name );
	~Cat( void );
	Cat( Cat const &other );
	Cat	&operator=( Cat const &other );
};

#endif