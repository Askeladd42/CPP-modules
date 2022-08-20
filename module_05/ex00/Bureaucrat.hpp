/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:28:36 by plam              #+#    #+#             */
/*   Updated: 2022/08/20 16:29:57 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <iostream>
# include <stdexcept>

class Bureaucrat {
private:
	std::string	_name;
	int			_grade;
public:
	Bureaucrat( std::string name, int grade );
	~Bureaucrat( void );
	Bureaucrat( Bureaucrat const &other );
	Bureaucrat		&operator=( Bureaucrat const &other );
	std::ostream	&operator<<( std::ostream &ost , Bureaucrat &b );

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

	std::string	getName();
	int			getGrade();

	void		incrGrade();
	void		decrGrade();
};

#endif