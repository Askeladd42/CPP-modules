/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:30:45 by plam              #+#    #+#             */
/*   Updated: 2023/03/02 17:26:38 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BITCOINEXHCANGE_HPP__
# define __BITCOINEXHCANGE_HPP__

# include <iostream>
# include <stdexcept>
# include <vector>

class	btc_ex {
	private:
		std::vector<std::string, std::string>	args;	//temporary, maybe replace the strings by the typedef/name U & V for the vector
	public:
		btc_ex();
		~btc_ex();
		btc_ex(std::string file);
		btc_ex(btc_ex const &other);
		btc_ex	&operator=(btc_ex const &other);
		
};

#endif