/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:43:23 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/11 19:47:30 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "./Weapon.hpp"

class	HumanA
{
	private:
		std::string	name;
		Weapon		*weapon;
	
	public :
		HumanA();
		HumanA(std::string	_name);
		HumanA(std::string	_name, Weapon &_weapon);
		~HumanA();

		void	attack();
		void	setWeapon(Weapon &_weapon);
};

#endif
