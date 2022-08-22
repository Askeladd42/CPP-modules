/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:11:47 by plam              #+#    #+#             */
/*   Updated: 2022/05/19 16:07:39 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	Alpha("Albert");
	Zombie	*Beta = newZombie("Barry");

	Alpha.announce();
	Beta->announce();
	randomChump("Chris");
	delete(Beta);
	return 0;
}
