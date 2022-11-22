/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:34:17 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/16 14:45:00 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(const std::string &_Name);
		ScavTrap(const ScavTrap &_scavtrap);
		ScavTrap&	operator=(ScavTrap &_scavtrap);
		~ScavTrap();

		void	attack(const std::string& target);

		void	guardGate();
};

#endif