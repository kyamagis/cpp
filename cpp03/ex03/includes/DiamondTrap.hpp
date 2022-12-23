/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:34:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/16 17:29:19 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string name;

	public :
		DiamondTrap();
		DiamondTrap(const std::string &_name);
		DiamondTrap(const DiamondTrap &_diamondtrap);
		DiamondTrap&	operator=(const DiamondTrap &_diamondtrap);
		~DiamondTrap();

		void	attack(const std::string& target);
		void	whoAmI();
};

#endif