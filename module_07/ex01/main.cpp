/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:44:58 by plam              #+#    #+#             */
/*   Updated: 2022/09/30 14:38:53 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Iter.hpp"

int	main( void ) {
	int		int_tab[] = {-12, 42, -2147483648, 2147483647, 0, -54154655, -13, 1};
	char	*char_tab[] = { "Salut !", "C'est Billy !", "On a des problèmes là !"};
	float	float_tab[] = {-42.3f, 27.18f, 145421535453435.75454f, -534354354354};
	double	double_tab[] = {21.42, -5431134565, 45533345334.54245346546};

	::iter(int_tab, 8, print);
	::iter(char_tab, 3, print);
	::iter(float_tab, 4, print);
	::iter(double_tab, 3, print);
	return 0;
}