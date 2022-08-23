/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:48:25 by plam              #+#    #+#             */
/*   Updated: 2022/08/23 18:56:04 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Form {
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeExc;
		int const			_gradeSgn;
	public:
		Form( std::string name, int gradeSgn, int gradeExc );
		~Form();
		Form( Form const &other );
		Form	&operator=( Form const &other );

		class tooHigh : public std::exception {
			virtual const char* what() const throw()
			{
				return "the grade assigned is too high !";
			}
		}GradeTooHighException;

		class tooLow : public std::exception {
			virtual const char* what() const throw()
			{
				return "the grade assigned is too low !";
			}
		}GradeTooLowException;

		std::string const	getName() const;
		bool				getSgn() const;
		int					getGradeExc() const;
		int					getGradeSgn() const;


		void	beSigned( Bureaucrat b );
};

std::ostream&	operator<<( std::ostream &ost, Form &f );

#endif