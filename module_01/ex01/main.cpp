/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:11:47 by plam              #+#    #+#             */
/*   Updated: 2022/05/19 15:10:35 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*Alpha = newZombie("Albert");
	Alpha->announce();
	randomChump("Barry");
	delete(Alpha);
	return 0;
}
