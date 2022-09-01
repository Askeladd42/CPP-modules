/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:15:07 by plam              #+#    #+#             */
/*   Updated: 2022/09/01 12:44:57 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm( std::string target );
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm( ShrubberyCreationForm const &other );
	ShrubberyCreationForm	&operator=( ShrubberyCreationForm const &other );

	void	execute( Bureaucrat const &executor ) const;
};

#endif