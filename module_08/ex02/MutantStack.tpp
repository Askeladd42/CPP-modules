/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:49:46 by plam              #+#    #+#             */
/*   Updated: 2022/10/13 13:24:38 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_TPP__
# define __MUTANTSTACK_TPP__

# include <iostream>
# include <vector>
# include <stack>
# include <algorithm>

template< typename T >
class MutantStack : public std::stack<T> {
	public:
		MutantStack<T>() { }
		virtual ~MutantStack<T>() { }
		MutantStack<T>( MutantStack<T> const &other ) { *this = other }
		MutantStack<T>	&operator=( MutantStack<T> const &other ) {
			if (this != &other)
				this->c = other.c;
			return *this;
		}
		
		typedef typename std::stack<T>::iterator				iterator;
		typedef typename std::stack<T>::const_iterator			const_iterator;
		typedef typename std::stack<T>::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::const_reverse_iterator	const_reverse_iterator;

		//iterator	;			to complete correctly
};

#endif