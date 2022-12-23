/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:34:55 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/18 22:40:41 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): name("Emperor")
{
	FragTrap	frag;
	ScavTrap	scav;
	
	ClapTrap::set_name("Emperor_clap_name");
	this->set_hit_point(frag.get_hit_point());
	this->set_energy_point(scav.get_energy_point());
	this->set_attack_damage(frag.get_attack_damage());
	std::cout << "\x1b[32mDiamondTrap\033[m "<< this->name << " called Default constructor\n" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &_name): name(_name)
{
	FragTrap	frag;
	ScavTrap	scav;

	ClapTrap::set_name(_name + "_clap_name");
	this->set_hit_point(frag.get_hit_point());
	this->set_energy_point(scav.get_energy_point());
	this->set_attack_damage(frag.get_attack_damage());
	std::cout << "\x1b[32mDiamondTrap\033[m "<< this->name << " called specific constructor\n" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &_diamondtrap): ClapTrap(), FragTrap(), ScavTrap()
{
	*this = _diamondtrap;
	std::cout  << "\x1b[32mDiamondTrap\033[m " << this->name << " called Copy constructor\n" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &_diamondtrap)
{
	if (this != &_diamondtrap)
	{
		this->name = _diamondtrap.name;
		ClapTrap::set_name(_diamondtrap.name + "_clap_name");
		this->set_hit_point(_diamondtrap.get_hit_point());
		this->set_energy_point(_diamondtrap.get_energy_point());
		this->set_attack_damage(_diamondtrap.get_attack_damage());
	}
	std::cout << "\x1b[32mDiamondTrap\033[m " << this->name << " called assignment operator\n" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\n\x1b[32mDiamondTrap\033[m called Destructor" << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "\n\x1b[32mDiamondTrap\033[m I am " << this->name << std::endl;
	std::cout << "\x1b[32mClapTrap\033[m    I am " << ClapTrap::get_name() << std::endl << std::endl;
}
