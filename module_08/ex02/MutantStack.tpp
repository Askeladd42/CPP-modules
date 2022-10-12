/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:49:46 by plam              #+#    #+#             */
/*   Updated: 2022/10/12 16:50:48 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_TPP__
# define __MUTANTSTACK_TPP__

# include <iostream>
# include <vector>
# include <stack>
# include <algorithm>

template< typename T >
class MutantStack<T> : public std::stack {
private:
	/* data */
public:
	MutantStack<T>(/* args */);
	~MutantStack<T>();
	MutantStack<T>(MutantStack<T> const &other);
	MutantStack<T>	&operator=(MutantStack<T> const &other);

	//MutantStack	iterator;			to complete correctly
};

#endif