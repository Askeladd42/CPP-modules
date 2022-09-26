/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:09:03 by plam              #+#    #+#             */
/*   Updated: 2022/09/26 15:18:46 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}
Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int	main(void) {

	Data		Data;
	Data		*newData; // to see zhy it is undefined
	uintptr_t	rawData;

	Data.raw = 1000;
	Data.str = "Wake the fuck up, Samurai !";

	std::cout << "Data before serialize :" << std::endl << "- raw : "
	<< Data.raw << std::endl << "- str : " << Data.str << std::endl;

	std::cout << "Data address : 0x" << &Data << std::endl;
	
	rawData = serialize(&Data);
	std::cout << "raw Data address : 0x" << rawData << std::endl;
	
	newData = deserialize(rawData);

	std::cout << "New Data after serialize :" << std::endl << "- raw : "
	<< newData->raw << std::endl << "- str : " << newData->str << std::endl;

	return 0;
}