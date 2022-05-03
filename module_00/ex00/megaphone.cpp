/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:10:07 by plam              #+#    #+#             */
/*   Updated: 2022/05/03 14:45:58 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*capitalize(char *str)
{
	int	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
int	main(int ac, char **av)
{
	if (ac > 1)
	{
		int	i = 1;
		while (i < ac)
			std::cout << capitalize(av[i++]);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << '\n';
}
