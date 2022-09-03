/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:13:31 by plam              #+#    #+#             */
/*   Updated: 2022/09/03 18:08:24 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

# include <cstdlib>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm : public Form{
public:
	RobotomyRequestForm( std::string const target );
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm( RobotomyRequestForm const &other );
	RobotomyRequestForm	&operator=( RobotomyRequestForm const &other );

	void	execute( Bureaucrat const &executor ) const;
};

#endif