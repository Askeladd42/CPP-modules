/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:28:36 by plam              #+#    #+#             */
/*   Updated: 2022/09/05 15:50:11 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <iostream>
# include <stdexcept>

class Form;

class Bureaucrat {
private:
	std::string const	_name;
	int					_grade;
public:
	Bureaucrat( std::string name, int grade );
	~Bureaucrat( void );
	Bureaucrat( Bureaucrat const &other );
	Bureaucrat	&operator=( Bureaucrat const &other );

	class tooHigh : public std::exception {
		virtual const char* what() const throw()
		{
			return "The grade assigned is too high !";
		}
	}GradeTooHighException;

	class tooLow : public std::exception {
		virtual const char* what() const throw()
		{
			return "The grade assigned is too low !";
		}
	}GradeTooLowException;

	std::string const	getName() const;
	int					getGrade() const;

	void				incrGrade();
	void				decrGrade();

	void				signForm( Form &form );
	void				executeForm( Form const &form ) const;

};

std::ostream&	operator<<( std::ostream &ost, Bureaucrat &b );

#endif