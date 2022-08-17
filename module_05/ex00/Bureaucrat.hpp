/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:28:36 by plam              #+#    #+#             */
/*   Updated: 2022/08/17 15:41:23 by plam             ###   ########.fr       */
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
	Bureaucrat	&operator=( Bureaucrat const &other );
	Bureaucrat	&operator<<( Bureaucrat const &other );

	std::exception	GradeTooHighException {
		"The grade assigned is too high !"
	};

	std::exception	GradeTooLowException {
		"The grade assigned is too low !"
	};

	void	getName();
	void	getGrade();

	void	incrGrade();
	void	decrGrade();
};

#endif