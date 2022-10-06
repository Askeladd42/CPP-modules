/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:35:51 by plam              #+#    #+#             */
/*   Updated: 2022/10/06 15:22:39 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_TPP__
# define __EASYFIND_TPP__

# include <iterator>
# include <algorithm>

template< typename T >
typename T::iterator	easyfind( T & ctn, int const & val ) {
	return std::find(ctn.begin(), ctn.end(), val);
};

#endif