/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:49:46 by plam              #+#    #+#             */
/*   Updated: 2022/10/13 13:49:00 by plam             ###   ########.fr       */
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
		MutantStack<T>( MutantStack<T> const &other ) { *this = other; }
		MutantStack<T>	&operator=( MutantStack<T> const &other ) {
			if (this != &other)
				this->c = other.c;
			return *this;
		}
		
		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		iterator																begin() { return this->c.begin(); }
		iterator																end() { return this->c.end(); }
		const_iterator															cbegin() { return this->c.cbegin(); }
		const_iterator															cend() { return this->c.cend(); }
		reverse_iterator														rbegin() { return this->c.rbegin(); }
		reverse_iterator														rend() { return this->c.rend(); }
		const_reverse_iterator													crbegin() { return this->c.crbegin(); }
		const_reverse_iterator													crend() { return this->c.crend(); }
};

#endif