
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
		ScavTrap&	operator=(const ScavTrap &_scavtrap);
		~ScavTrap();

		void	attack(const std::string& target);

		void	guardGate();
};

#endif