/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:10:01 by plam              #+#    #+#             */
/*   Updated: 2022/09/26 12:15:57 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZE_H__
# define __SERIALIZE_H__

# include <iostream>
# include <string>

class serialize
{
private:
	Data	_toSerialize;
public:
	serialize( void );
	~serialize();

	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
};

#endif