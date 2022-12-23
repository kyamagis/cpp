/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/18 13:31:51 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	private:
		std::string	Name;
		long long	Hit_point;
		long long	Energy_points;
		long long	Attack_damage;
	
	public :
		ClapTrap();
		ClapTrap(const std::string &_Name);
		ClapTrap(const ClapTrap &_claptrap);
		ClapTrap&	operator=(const ClapTrap &_claptrap);
		~ClapTrap();

		std::string	get_name() const;
		long long	get_hit_point() const;
		long long	get_energy_point() const;
		long long	get_attack_damage() const;
		void		set_name(const std::string &_name);
		void		set_hit_point(const unsigned int amount);
		void		set_energy_point(const unsigned int amount);
		void		set_attack_damage(const unsigned int amount);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

std::ostream& operator<<(std::ostream &ostrm, const ClapTrap& claptrap);

#endif
