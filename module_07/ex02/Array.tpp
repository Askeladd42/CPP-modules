/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:37:09 by plam              #+#    #+#             */
/*   Updated: 2022/10/03 11:52:31 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
class Array {
	private:
		unsigned int	_size;
	public:
		Array<T>( void );
		Array( unsigned int n );
		Array( Array const &other );
		Array	&operator=( Array const &other );
		~Array();
};
