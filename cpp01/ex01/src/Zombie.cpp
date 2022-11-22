/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:52:04 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/11 14:01:43 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << "\n";
}

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
	std::cout << std::setw(5) << this->_name << ": \x1b[31m+\033[m" << "\n";
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}
