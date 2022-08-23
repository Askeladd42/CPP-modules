/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:48:25 by plam              #+#    #+#             */
/*   Updated: 2022/08/23 12:30:03 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Form {
	private:
		std::string			_name;
		bool				_signed;
		int					_gradeExc;
		int					_gradeSgn;
	public:
		Form( std::string name, int gradeExc, int gradeSgn );
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

		std::string	getName();
		bool		getSgn();
		int			getGradeExc();
		int			getGradeSgn();

		void	beSigned( Bureaucrat b );
};

std::ostream&	operator<<( std::ostream &ost, Form &f );

#endif