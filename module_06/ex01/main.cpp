/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:09:03 by plam              #+#    #+#             */
/*   Updated: 2022/09/26 14:19:27 by plam             ###   ########.fr       */
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
	uintptr_t	rawData;
	Data		*newData;

	Data.raw = 1000;
	Data.str = "Wake the fuck up, Samurai !";

	rawData = serialize(&Data);
	newData = deserialize(rawData);

	std::cout << "Data before serialize :" << std::endl << "- raw : "
	<< Data.raw << std::endl << "- str : " << Data.str << std::endl;

	std::cout << "New Data after serialize :" << std::endl << "- raw : "
	<< newData->raw << std::endl << "- str : " << newData->str << std::endl;

	return 0;
}