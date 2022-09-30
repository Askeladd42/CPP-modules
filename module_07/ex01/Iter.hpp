/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:41:07 by plam              #+#    #+#             */
/*   Updated: 2022/09/30 14:27:32 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
# define __ITER_HPP__

# include <iostream>
# include <cstdlib>

template < typename T >
void	iter(T const * array, size_t size, void (*f)(T const &)) {
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

#endif