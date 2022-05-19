/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:11:47 by plam              #+#    #+#             */
/*   Updated: 2022/05/19 17:42:28 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 20;
	Zombie*	horde = zombieHorde(N, "Gary");

	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	return 0;
}
