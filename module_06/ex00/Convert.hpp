/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:46:04 by plam              #+#    #+#             */
/*   Updated: 2022/09/19 13:59:21 by plam             ###   ########.fr       */
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

	void			getChar( double n) const;
	void			getInt( double n) const;
	void			getFloat( double n) const;
	void			getDouble(double n) const;

public:
	Convert( std::string elm );
	~Convert();
	Convert( Convert const &other );
	Convert	&operator=( Convert const &other );

	void			getConvert();
};

#endif
