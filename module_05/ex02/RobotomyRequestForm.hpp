/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:13:31 by plam              #+#    #+#             */
/*   Updated: 2022/08/23 18:39:54 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

# include "Form.hpp"

class RobotomyRequestForm {
private:
	/* data */
public:
	RobotomyRequestForm( std::string target );
	~RobotomyRequestForm();
	RobotomyRequestForm( RobotomyRequestForm const &other );
	RobotomyRequestForm	&operator=( RobotomyRequestForm const &other );

	void	execute( Bureaucrat const &executor ) const;
};

#endif