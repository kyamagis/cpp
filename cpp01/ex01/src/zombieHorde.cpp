/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:51:34 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/11 16:58:29 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

static Zombie*	new_zombieHorde_to_N(int N)
{
	Zombie	*horde;

	try
	{	
		horde = new Zombie[N];
	}
	catch (std::bad_alloc &e)
	{
		std::cout << e.what() << "\n";
		return (NULL);
	}
	return (horde);
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*horde = new_zombieHorde_to_N(N);

	if (!horde)
		return (NULL);
	for(int i = 0; i < N; i++)
		horde[i].set_name(name);
	return (horde);
}