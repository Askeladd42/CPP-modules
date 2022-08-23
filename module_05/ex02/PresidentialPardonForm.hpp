/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:17:52 by plam              #+#    #+#             */
/*   Updated: 2022/08/23 11:33:19 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

# include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	/* data */
public:
	PresidentialPardonForm( std::string target );
	~PresidentialPardonForm();
};

#endif