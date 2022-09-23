/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:43:27 by plam              #+#    #+#             */
/*   Updated: 2022/09/23 15:25:45 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Please put only one argument for the program." << std::endl;
		return 1;
	}
	Convert	*Conv = new Convert( av[1] );
	Conv->getConvert();
	delete(Conv);
	return 0;
}