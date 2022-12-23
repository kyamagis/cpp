/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:16:36 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/16 14:16:36 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("Hero"), Hit_point(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap " << this->Name << " called Default constructor" << std::endl;	
}

ClapTrap::ClapTrap(const std::string &_Name): Name(_Name), Hit_point(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap " << this->Name << " called specific constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &_claptrap)
{
	*this = _claptrap;
	std::cout << "ClapTrap " << this->Name << " called Copy constructor" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &_claptrap)
{
	if (this != &_claptrap)
	{
		this->Name = _claptrap.get_name(); 
		this->Hit_point = _claptrap.get_hit_point();
		this->Energy_points = _claptrap.get_energy_point();
		this->Attack_damage = _claptrap.get_attack_damage();
	}
	std::cout << "ClapTrap " << this->Name << " called assignment operator" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap called Destructor" << std::endl;
}

std::string	ClapTrap::get_name() const
{
	return this->Name;
}

long long	ClapTrap::get_hit_point() const
{
	return this->Hit_point;
}

long long	ClapTrap::get_energy_point() const
{
	return this->Energy_points;
}

long long	ClapTrap::get_attack_damage() const
{
	return this->Attack_damage;
}

void	ClapTrap::set_hit_point(unsigned int amount)
{
	this->Hit_point = amount;
}

void	ClapTrap::set_energy_point(unsigned int amount)
{
	this->Energy_points = amount;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->Energy_points <= 0)
	{	
		std::cout << "ClapTrap " << this->Name <<" no energy points " << std::endl;
		return ;
	}
	if (this->Hit_point <= 0)
	{	
		std::cout << "ClapTrap " << this->Name <<" is died " << std::endl;
		return ;
	}
	this->Energy_points -= 1;
	std::cout << "ClapTrap " << this->Name <<" attacks " << target << " causing "
				<< this->Attack_damage << " points of damage!"
				<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hit_point < 1)
		return ;
	this->Hit_point -= amount;
	std::cout << "ClapTrap " << this->Name << " was taken " 
				<< amount << " points of damage!"
				<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy_points <= 0)
	{	
		std::cout << "ClapTrap " << this->Name <<" no energy points " << std::endl;
		return ;
	}
	if (this->Hit_point <= 0)
	{	
		std::cout << "ClapTrap "<< this->Name <<" is died " << std::endl;
		return ;
	}
	this->Energy_points -= 1;
	this->Hit_point += amount;
	std::cout << "ClapTrap " << this->Name <<" repaired " << amount << " points of Hit point!"
				<< std::endl;
}

std::ostream& operator<<(std::ostream &ostrm, const ClapTrap& claptrap)
{
	return ostrm << claptrap.get_name() << std::endl
				<< claptrap.get_hit_point() << std::endl
				<< claptrap.get_energy_point() << std::endl
				<< claptrap.get_attack_damage() << std::endl << std::endl;
}