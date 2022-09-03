/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:52:18 by plam              #+#    #+#             */
/*   Updated: 2022/09/03 18:21:44 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include "Form.hpp"

class Intern {
	public:
		Intern();
		~Intern();
	
	class fNonExs : public std::exception {
		virtual const char* what() const throw()
		{
			return "this format doesn't exist !";
		}
	}FormatNonExistent;

	Form*	makeForm(std::string fName, std::string fTarget);
};

#endif