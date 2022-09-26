/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:10:01 by plam              #+#    #+#             */
/*   Updated: 2022/09/26 13:44:19 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATA_H__
# define __DATA_H__

# include <iostream>
# include <string>
# include <cstdint>

class Data
{
public:
	int			raw;
	std::string	str;

	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
};

#endif