/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:48:25 by plam              #+#    #+#             */
/*   Updated: 2022/09/06 16:06:37 by plam             ###   ########.fr       */
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
		std::string			_target;
		bool				_signed;
		int const			_gradeSgn;
		int const			_gradeExc;
	public:
		Form( std::string name, int gradeSgn, int gradeExc );
		virtual ~Form();
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

		class notSgn : public std::exception {
			virtual const char* what() const throw()
			{
				return "the format is not signed !";
			}
		}NotSigned;

		virtual void				setTarget( std::string target );
		virtual std::string const	getName() const;
		virtual std::string	const	getTarget() const;
		virtual bool				getSgn() const;
		virtual int					getGradeExc() const;
		virtual int					getGradeSgn() const;

		virtual void				beSigned( Bureaucrat &b );
		virtual void				execute( Bureaucrat const &executor ) const;

};

std::ostream&	operator<<( std::ostream &ost, Form &f );

#endif