/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:18:16 by plam              #+#    #+#             */
/*   Updated: 2022/08/23 15:38:52 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int ac, char **av) {
	std::string	dst;

	if (ac != 4) {
		std::cerr << "Error : the program must have 3 arguments to work : filename-s1(string to be replaced)-s2(replacement string for s1)" << std::endl;
		return 1;
	}

	std::string	const fileName = av[1];
	std::string	toReplace = av[2];
	std::string	replacer = av[3];

	if (toReplace.length() == 0 || replacer.length() == 0) {
		std::cerr << "Error : arguments must not be empty" << std::endl;
		return 1;
	}

	std::ifstream	ifs(av[1]);					// seems ifstream doesn't work with a string, only with char*

	if (!ifs) {
		std::cerr << "Error : " << fileName << " : cannot open the file." << std::endl;
		return 1;
	}

	std::ofstream	ofs(replaceRename(fileName).c_str());

	while (!ifs.eof() && !ifs.fail()) {
		std::getline(ifs, dst);
		ofs << replaceStr(dst, toReplace, replacer);
		if (!ifs.eof() && !ifs.fail())
			ofs << std::endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}
