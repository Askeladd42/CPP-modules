/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:52:18 by plam              #+#    #+#             */
/*   Updated: 2022/09/03 20:24:22 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include "Form.hpp"

class Intern {
	private:
	static const	formTab	t_formats[3];
	static Form*	_shrub( std::string target );
	static Form*	_robot( std::string target );
	static Form*	_pres( std::string target );

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