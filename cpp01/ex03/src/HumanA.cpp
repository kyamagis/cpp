/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:53:51 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/11 19:33:01 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA()
{

}

HumanA::HumanA(std::string	_name)
{
	this->name = _name;
}

HumanA::HumanA(std::string	_name, Weapon &_weapon)
{
	this->name = _name;
	this->weapon = &_weapon;
}

HumanA::~HumanA()
{
	std::cout << this->name << " is died" << "\n";
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << "\n";
}

void	HumanA::setWeapon(Weapon &_weapon)
{
	this->weapon = &_weapon;
}
