/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:12:48 by plam              #+#    #+#             */
/*   Updated: 2023/03/02 17:10:50 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RPN_HPP__
# define __RPN_HPP__

# include <iostream>
# include <stack>

class RPN {
	private:
		std::stack<int>	stack;
	public:
		RPN();
		~RPN();
		RPN(std::string const &str);
		RPN(RPN const &other);
		RPN	&operator=(RPN const &other);
};

#endif