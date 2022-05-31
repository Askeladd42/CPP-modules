/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:17:44 by plam              #+#    #+#             */
/*   Updated: 2022/05/31 15:41:45 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

std::string	replaceStr( std::string dst, std::string s1, std::string s2 ) {
	size_t	src = dst.find(s1);
	
	while (src != std::string::npos) {
		dst.erase(src, s1.length());
		dst.insert(src, s2);
	}
	return dst;
}

std::string	replaceRename( std::string fileName ) {
	fileName.append(".replace");
	return fileName;
}
