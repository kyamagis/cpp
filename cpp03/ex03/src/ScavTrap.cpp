/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:35:05 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/16 18:12:12 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->set_name("Hero");
	this->set_hit_point(100);
	this->set_energy_point(50);
	this->set_attack_damage(20);
	std::cout << "\x1b[31mScavTrap\033[m "<< this->get_name() << " called Default constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string &_Name)
{
	this->set_name(_Name);
	this->set_hit_point(100);
	this->set_energy_point(50);
	this->set_attack_damage(20);
	std::cout << "\x1b[31mScavTrap\033[m "<< this->get_name() << " called specific constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &_scavtrap): ClapTrap()
{
	this->set_name(_scavtrap.get_name()); 
	this->set_hit_point(_scavtrap.get_hit_point());
	this->set_energy_point(_scavtrap.get_energy_point());
	this->set_attack_damage(_scavtrap.get_attack_damage());
	std::cout  << "\x1b[31mScavTrap\033[m " << this->get_name() << " called Copy constructor" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap &_scavtrap)
{
	this->set_name(_scavtrap.get_name()); 
	this->set_hit_point(_scavtrap.get_hit_point());
	this->set_energy_point(_scavtrap.get_energy_point());
	this->set_attack_damage(_scavtrap.get_attack_damage());
	std::cout << "\x1b[31mScavTrap\033[m " << this->get_name() << " called assignment operator" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\x1b[31mScavTrap\033[m called Destructor" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->get_energy_point() <= 0)
	{	
		std::cout << "\x1b[31mScavTrap\033[m " << this->get_name() <<" no energy points" << std::endl;
		return ;
	}
	if (this->get_hit_point() <= 0)
	{	
		std::cout << "\x1b[31mScavTrap\033[m " << this->get_name() <<" is died" << std::endl;
		return ;
	}
	this->set_energy_point(get_energy_point() - 1);
	std::cout << "\x1b[31mScavTrap\033[m " <<this->get_name() <<" attacks " << target << " causing "
				<< this->get_attack_damage() << " points of damage!\n"
				<< std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->get_hit_point() <= 0)
	{	
		std::cout << "\x1b[31mScavTrap\033[m is not Gate keeper mode." << std::endl;
		return ;
	}
	std::cout << "\x1b[31mScavTrap\033[m is now in Gate keeper mode." << std::endl;
}

