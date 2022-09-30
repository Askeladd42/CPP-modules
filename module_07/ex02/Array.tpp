/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:37:09 by plam              #+#    #+#             */
/*   Updated: 2022/09/30 14:07:45 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
class Array< T > {
	public:
		Array( void );
		Array( unsigned int n );
		Array( Array const &other );
		Array	&operator=( Array const &other );
		~Array();
};
