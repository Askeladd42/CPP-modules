/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:13:31 by plam              #+#    #+#             */
/*   Updated: 2022/08/23 11:33:47 by plam             ###   ########.fr       */
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
};

#endif