/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:52:18 by plam              #+#    #+#             */
/*   Updated: 2022/08/23 12:57:16 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include "Form.hpp"

class Intern {
	public:
		Intern();
		~Intern();
	
	Form*	makeForm(std::string fName, std::string fTarget);
};

#endif