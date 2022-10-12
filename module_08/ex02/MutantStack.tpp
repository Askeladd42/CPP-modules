/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:49:46 by plam              #+#    #+#             */
/*   Updated: 2022/10/12 16:37:04 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_TPP__
# define __MUTANTSTACK_TPP__

# include <iostream>
# include <vector>
# include <stack>
# include <algorithm>

template< typename T >
class MutantStack : public std::stack {
private:
	/* data */
public:
	MutantStack(/* args */);
	~MutantStack();
};

#endif