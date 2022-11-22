/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:43:17 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/11 19:40:03 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "./Weapon.hpp"

class	HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;
	
	public :
		HumanB();
		HumanB(std::string	_name);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon &_weapon);
		
};

#endif
