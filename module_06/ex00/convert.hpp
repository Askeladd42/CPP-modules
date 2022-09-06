/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:46:04 by plam              #+#    #+#             */
/*   Updated: 2022/09/06 17:39:26 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERT_HPP__
# define __CONVERT_HPP__

# include <iostream>
# include <cmath>

class convert
{
private:
	std::string	toConvert;
public:
	convert( std::string elm );
	~convert();
	convert( convert const &other );
	convert	&operator=( convert const &other );

	char const		getChar() const;
	int const		getInt() const;
	float const		getFloat() const;
	double const	getDouble() const;
};

#endif
