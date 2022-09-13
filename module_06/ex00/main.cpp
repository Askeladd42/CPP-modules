/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:43:27 by plam              #+#    #+#             */
/*   Updated: 2022/09/13 15:11:48 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int ac, char **av) {
	if (ac == 2) {
		std::string	toConv = av[1];
		Convert	*Conv = new Convert( toConv );

		Conv->getConvert();
		delete(Conv);
	}
	return 0;
}