/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/10 23:04:50 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iomanip>
#include <iostream>

#define FIRST 0
#define LAST 1
#define NICK 2
#define PHONE 3
#define SECRET 4

class	Zombie
{
	private:
		std::string	_name;
	
	public :
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void 		announce( void );
		void		set_name(std::string name);
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif