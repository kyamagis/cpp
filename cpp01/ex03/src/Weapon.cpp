/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:59:08 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/11 19:31:58 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string	_type)
{
	this->type = _type;
}

Weapon::~Weapon(void)
{
	std::cout << this->type << " was broken" << "\n";
}

void	Weapon::setType(std::string	_type)
{
	this->type = _type;
}

std::string const	&Weapon::getType()
{
	return this->type;
}