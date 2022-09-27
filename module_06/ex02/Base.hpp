/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:59:52 by plam              #+#    #+#             */
/*   Updated: 2022/09/27 17:00:55 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE_HPP__
# define __BASE_HPP__

class Base {
public:
	virtual ~Base();
};

Base	*generate();
void	identify( Base* p );
void	identify( Base& p );

#endif