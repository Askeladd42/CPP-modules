/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:58:16 by plam              #+#    #+#             */
/*   Updated: 2022/10/06 18:28:14 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
# define __SPAN_HPP__

# include <iostream>
# include <cstdlib>
# include <limits>
# include <exception>
# include <iterator>
# include <algorithm>
# include <vector>

class Span {
	private:
		unsigned int		_size;
		std::vector<int>	_stock;
	public:
		Span() { }
		Span( unsigned int N );
		~Span();
		Span( Span const &other );
		Span	&operator=( Span const &other );

		void			addNumber( int newNb );
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

	class AlreadyFull : public std::exception {
		virtual const char* what() const throw()
		{
			return "No place available to add another number in it !";
		}
	};
};

#endif