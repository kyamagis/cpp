/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:34:28 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/16 14:34:28 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap()
{
	this->set_name("Tina");
	this->set_hit_point(100);
	this->set_energy_point(100);
	this->set_attack_damage(30);
	std::cout << "\x1b[34mFragTrap\033[m "<< this->get_name() << " called Default constructor\n" << std::endl;
}

FragTrap::FragTrap(const std::string &_Name)
{
	this->set_name(_Name);
	this->set_hit_point(100);
	this->set_energy_point(100);
	this->set_attack_damage(30);
	std::cout << "\x1b[34mFragTrap\033[m "<< this->get_name() << " called specific constructor\n" << std::endl;
}

FragTrap::FragTrap(const FragTrap &_fragtrap): ClapTrap()
{
	*this = _fragtrap;
	std::cout  << "\x1b[34mFragTrap\033[m " << this->get_name() << " called Copy constructor\n" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap &_fragtrap)
{
	if (this != &_fragtrap)
	{
		this->set_name(_fragtrap.get_name()); 
		this->set_hit_point(_fragtrap.get_hit_point());
		this->set_energy_point(_fragtrap.get_energy_point());
		this->set_attack_damage(_fragtrap.get_attack_damage());
	}
	std::cout << "\x1b[34mFragTrap\033[m " << this->get_name() << " called assignment operator\n" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "\n\x1b[34mFragTrap\033[m called Destructor" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (this->get_energy_point() <= 0)
	{	
		std::cout << "\x1b[34mFragTrap\033[m is not positive high fives request." << std::endl;
		return ;
	}
	std::cout << "\x1b[34mFragTrap\033[m is positive high fives request." << std::endl;
}