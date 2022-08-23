/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:17:52 by plam              #+#    #+#             */
/*   Updated: 2022/08/23 18:38:53 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

# include "Form.hpp"

class PresidentialPardonForm : virtual Form {
private:
	/* data */
public:
	PresidentialPardonForm( std::string const target );
	~PresidentialPardonForm();
	PresidentialPardonForm( PresidentialPardonForm const &other );
	PresidentialPardonForm	&operator=( PresidentialPardonForm const &other);

	void	execute( Bureaucrat const &executor ) const;
};

#endif