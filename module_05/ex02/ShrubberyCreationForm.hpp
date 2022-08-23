/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:15:07 by plam              #+#    #+#             */
/*   Updated: 2022/08/23 18:41:32 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

# include "Form.hpp"

class ShrubberyCreationForm {
private:
	/* data */
public:
	ShrubberyCreationForm( std::string target );
	~ShrubberyCreationForm();
	ShrubberyCreationForm( ShrubberyCreationForm const &other );
	ShrubberyCreationForm	&operator=( ShrubberyCreationForm const &other );

	void	execute( Bureaucrat const &executor ) const;
};

#endif