/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:11:47 by plam              #+#    #+#             */
/*   Updated: 2022/08/23 15:38:26 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "string memory address : " << &str << std::endl;
	std::cout << "stringPTR memory address : " << &stringPTR << std::endl;
	std::cout << "stringREF memory address : " << &stringREF << std::endl;

	std::cout << "string content : " << str << std::endl;
	std::cout << "stringPTR content : " << stringPTR << std::endl;
	std::cout << "stringREF content : " << stringREF << std::endl;
}
