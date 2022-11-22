/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:51:34 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/16 13:34:00 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie	*zombie;

	try
	{	
		zombie = new Zombie;
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << e.what() << "\n";
		return (NULL);
	}
	zombie->set_name(name);
	return (zombie);
}