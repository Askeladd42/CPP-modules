/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:00:55 by plam              #+#    #+#             */
/*   Updated: 2022/09/29 16:20:43 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
# define __WHATEVER_HPP__

# include <iostream>
# include <limits>

template < typename T > 
T const &	max( T const & x, T const & y ) {
	return (x>=y ? x : y );
};

T const &	min( T const & x, T const & y ) {
	return (x<=y ? x : y);
};

#endif