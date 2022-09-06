/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:52:18 by plam              #+#    #+#             */
/*   Updated: 2022/09/06 16:03:58 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
private:
	struct	s_form {
		std::string	f_name;
		Form*		(*call)(std::string fTarget);	//using callbacks for format recognition
	};

	static const s_form	formTab[3];
	static Form*		f_shrub( std::string target );
	static Form*		f_robot( std::string target );
	static Form*		f_pres( std::string target );

public:
	Intern();
	~Intern();
	Intern(Intern const &other);
	Intern	&operator=(Intern const &other);

	class fNonExs : public std::exception {
		virtual const char* what() const throw()
		{
			return "this format doesn't exist !";
		}
	}FormatNonExistent;

	Form*	makeForm(std::string fName, std::string fTarget);
};

#endif