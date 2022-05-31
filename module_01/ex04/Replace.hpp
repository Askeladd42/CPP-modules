/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:16:33 by plam              #+#    #+#             */
/*   Updated: 2022/05/31 15:37:37 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __REPLACE_HPP__
# define __REPLACE_HPP__

# include <iostream>
# include <string>
# include <fstream>

std::string	replaceStr( std::string filestream, std::string s1, std::string s2 );
std::string	replaceRename( std::string fileName );

#endif