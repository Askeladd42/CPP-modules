/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:46:04 by plam              #+#    #+#             */
/*   Updated: 2022/09/15 14:34:18 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERT_HPP__
# define __CONVERT_HPP__

# include <iostream>
# include <iomanip>
# include <cmath>
# include <limits>

class Convert
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
	void			setTypes();

	char const		getChar() const;
	int const		getInt() const;
	float const		getFloat() const;
	double const	getDouble() const;

public:
	Convert( std::string elm );
	~Convert();
	Convert( Convert const &other );
	Convert	&operator=( Convert const &other );

	void			getConvert();
};

#endif
