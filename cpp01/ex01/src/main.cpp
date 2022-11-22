/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:54:32 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/08 16:11:01 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	int		N = 10;
	Zombie	*horde = zombieHorde( N, "zombie" );

	if (!horde)
		return (1);
	for (int i = 0; i < N; i++)
	{ 
		std::cerr << i << " ";horde[i].announce();
	}
	delete[] horde;
	return (0);
}

/* __attribute__((destructor))
static void destructor(void)
{
	system("leaks -q Moar_brainz");
}
 */