/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:46:04 by plam              #+#    #+#             */
/*   Updated: 2022/09/13 15:02:36 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERT_HPP__
# define __CONVERT_HPP__

# include <iostream>
# include <iomanip>
# include <cmath>
# include <limits>

class convert
{
private:
	std::string		_toConvert;

	bool			_isChar;
	bool			_isInt;
	bool			_isFloat;
	bool			_isDouble;

	float			_float;
	double			_double;

	void			setChar( std::string s );
	void			setInt( std::string s );
	void			setFloat( std::string s );
	void			setDouble( std::string s );

	char const		getChar() const;
	int const		getInt() const;
	float const		getFloat() const;
	double const	getDouble() const;

public:
	convert( std::string elm );
	~convert();
	convert( convert const &other );
	convert	&operator=( convert const &other );

	void			getConvert();
};

#endif
