/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:36:52 by plam              #+#    #+#             */
/*   Updated: 2022/10/03 12:38:53 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
# define  __ARRAY_HPP__

# include <iostream>
# include <exception>
# include <cstdlib>

# include "Array.tpp"

class OutOfBound : public std::exception {
	public:
		virtual const char*	what() const throw() {
			return "The index entered is out of bound";
		}
};

#endif