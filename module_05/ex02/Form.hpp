/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:48:25 by plam              #+#    #+#             */
/*   Updated: 2022/08/23 11:25:44 by plam             ###   ########.fr       */
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
		virtual ~Form();
		Form( Form const &other );
		Form	&operator=( Form const &other );
		Form	&operator<<( Form const &other );

		class tooHigh : public std::exception {
			virtual const char* what() const throw()
			{
				return "The grade assigned is too high !";
			}
		}GradeTooHighException;

		class tooLow : public std::exception {
			virtual const char* what() const throw()
			{
				return "the bureaucrat's grade is too low !";
			}
		}GradeTooLowException;

		virtual std::string	getName();
		virtual bool		getSgn();
		virtual int			getGradeExc();
		virtual int			getGradeSgn();

		void	beSigned( Bureaucrat b );
		void	execute( Bureaucrat const & executor ) const;
};

#endif