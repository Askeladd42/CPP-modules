/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:09:03 by plam              #+#    #+#             */
/*   Updated: 2022/09/28 12:46:26 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}
Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int	main(void) {

	Data		data;
	Data*		newData; // to see why it is undefined
	uintptr_t	rawData;

	data.raw = 1000;
	data.str = "Wake the fuck up, Samurai !";

	std::cout << "Data before serialize :" << std::endl << "- raw : "
	<< data.raw << std::endl << "- str : " << data.str << std::endl;

	std::cout << "Data address : " << &data << std::endl;
	
	rawData = serialize(&data);
	std::cout << "raw Data address : 0x" << rawData << std::endl;
	
	newData = deserialize(rawData);

	std::cout <<  "newData address : " << newData << std::endl;

	std::cout << "New Data after serialize :" << std::endl << "- raw : "
	<< newData->raw << std::endl << "- str : " << newData->str << std::endl;

	return 0;
}