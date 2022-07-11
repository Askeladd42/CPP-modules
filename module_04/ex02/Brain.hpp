/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:01:31 by plam              #+#    #+#             */
/*   Updated: 2022/07/11 15:52:57 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_CPP__
# define __BRAIN_CPP__

# include <iostream>

class Brain
{
private:
	std::string	_ideas[100];
public:
	Brain( void );
	Brain( std::string ideas );
	virtual ~Brain( void );
	Brain( Brain const &other );
	Brain	&operator=( Brain const &other );

	void		printIdeas( void ) const;
	std::string	getIdeas( void ) const;
};

#endif