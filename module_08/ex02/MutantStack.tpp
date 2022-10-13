/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:49:46 by plam              #+#    #+#             */
/*   Updated: 2022/10/13 11:39:23 by plam             ###   ########.fr       */
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
private:
	/* data */
public:
	MutantStack<T>();
	virtual ~MutantStack<T>();
	MutantStack<T>( MutantStack<T> const &other );
	MutantStack<T>	&operator=( MutantStack<T> const &other );

	//MutantStack	iterator;			to complete correctly
};

#endif